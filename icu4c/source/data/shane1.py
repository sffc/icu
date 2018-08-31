# Copyright (C) 2016 and later: Unicode, Inc. and others.
# License & terms of use: http://www.unicode.org/copyright.html

import argparse
from collections import namedtuple
import glob as pyglob
from distutils.sysconfig import parse_makefile

AVAILABLE_FEATURES = ["confusables", "cnvalias", "uconv", "brkitr", "stringprep", "dictionaries", "normalization", "coll", "unames", "misc", "locales", "curr", "lang", "region", "zone", "unit", "rbnf", "translit"]

flag_parser = argparse.ArgumentParser(
    description = """Generates rules for building ICU binary data files from text
and other input files in source control.

You can select features using either the --whitelist or --blacklist option.
Available features include:

{AVAILABLE_FEATURES}
""".format(AVAILABLE_FEATURES = "\n".join("    %s" % v for v in AVAILABLE_FEATURES)),
    formatter_class = argparse.RawDescriptionHelpFormatter
)
flag_parser.add_argument(
    "--format",
    help = "How to output the rules to run to build ICU data.",
    choices = ["bash", "gnumake", "nmake"],
    default = "bash"
)
flag_parser.add_argument(
    "--seqmode",
    help = "Whether to optimize rules to be run sequentially (fewer threads) or in parallel (many threads).",
    choices = ["sequential", "parallel"],
    default = "sequential"
)
flag_parser.add_argument(
    "--collation_ucadata",
    help = "Which data set to use for ucadata in collation.",
    choices = ["unihan", "implicithan"],
    default = "unihan"
)
features_group = flag_parser.add_mutually_exclusive_group()
features_group.add_argument(
    "--blacklist",
    metavar = "FEATURE",
    help = "A list of one or more features to disable; all others will be enabled by default. New users should favor a blacklist to ensure important data is not left out.",
    nargs = "+",
    choices = AVAILABLE_FEATURES
)
features_group.add_argument(
    "--whitelist",
    metavar = "FEATURE",
    help = "A list of one or more features to enable; all others will be disabled by default.",
    nargs = "+",
    choices = AVAILABLE_FEATURES
)


InFile = namedtuple("InFile", ["filename"])
TmpFile = namedtuple("TmpFile", ["filename"])
OutFile = namedtuple("OutFile", ["filename"])

def dir_for(file):
    if isinstance(file, InFile):
        return "{IN_DIR}"
    if isinstance(file, TmpFile):
        return "{TMP_DIR}"
    if isinstance(file, OutFile):
        return "{OUT_DIR}"
    assert False

SingleExecutionRequest = namedtuple("SingleExecutionRequest", ["name", "input_files", "output_files", "tool", "args", "format_with"])

RepeatedExecutionRequest = namedtuple("RepeatedExecutionRequest", ["name", "dep_files", "input_files", "output_files", "tool", "args", "format_with", "repeat_with"])

PrintFileRequest = namedtuple("PrintFileRequest", ["name", "output_file", "content"])

MakeRule = namedtuple("MakeRule", ["name", "input_files", "output_files", "cmds"])


class Config(object):

    def __init__(self, args):
        if args.whitelist:
            self._feature_set = set(args.whitelist)
        elif args.blacklist:
            self._feature_set = set(AVAILABLE_FEATURES) - set(args.blacklist)
        else:
            self._feature_set = set(AVAILABLE_FEATURES)
        self._max_parallel = (args.seqmode == "parallel")
        self._coll_han_type = args.collation_ucadata

    def has_feature(self, feature_name):
        assert feature_name in AVAILABLE_FEATURES
        return feature_name in self._feature_set

    def max_parallel(self):
        return self._max_parallel

    def coll_han_type(self):
        # Either "unihan" or "implicithan"
        return self._coll_han_type


def glob(pattern):
    in_dir = "." # TODO
    result_paths = pyglob.glob("{IN_DIR}/{PATTERN}".format(
        IN_DIR =in_dir,
        PATTERN = pattern
    ))
    return [v[len(in_dir)+1:] for v in sorted(result_paths)]


def repeated_execution_request_looper(request):
    # dictionary of lists to list of dictionaries:
    # https://stackoverflow.com/a/33046935/1407170
    ld = [dict(zip(request.repeat_with, t)) for t in zip(*request.repeat_with.values())]
    if not ld:
        # No special options given in repeat_with
        ld = [{} for _ in range(len(request.input_files))]
    return zip(ld, request.input_files, request.output_files)


def get_command_lines(requests, common_vars):
    cmds = []
    for request in requests:
        cmds += get_command_lines_helper(request, common_vars)
    return "\n".join(cmds)

def get_command_lines_helper(request, common_vars):
    if isinstance(request, PrintFileRequest):
        cmds = ["rm -f {OUTPUT_FILE}".format(**common_vars, OUTPUT_FILE = request.output_file.filename)]
        cmds += [
            "echo \"{LINE}\" >> {OUTPUT_FILE}".format(**common_vars,
                OUTPUT_FILE = request.output_file.filename,
                LINE = line.replace("\"", "\\\"")
            )
            for line in request.content.split("\n")]
        return cmds

    if request.tool == "mkinstalldirs":
        return ["sh ../mkinstalldirs {ARGS}".format(ARGS = request.args.format(**common_vars))]

    template = "../bin/{TOOL} {{ARGS}}".format(TOOL = request.tool)
    if isinstance(request, RepeatedExecutionRequest):
        cmds = []
        for iter_vars, input_file, output_file in repeated_execution_request_looper(request):
            cmds.append(template.format(ARGS = request.args.format(**common_vars, **request.format_with, **iter_vars,
                INPUT_FILE = input_file.filename,
                OUTPUT_FILE = output_file.filename
            )))
        return cmds

    if isinstance(request, SingleExecutionRequest):
        return [template.format(ARGS = request.args.format(**common_vars, **request.format_with,
            INPUT_FILES = [file.filename for file in request.input_files],
            OUTPUT_FILES = [file.filename for file in request.output_files],
        ))]

    assert False


def get_gnumake_rules(requests, common_vars, **kwargs):
    makefile_string = """## Makefile for ICU data
## Copyright (C) 2018 and later: Unicode, Inc. and others.

## Source directory information
srcdir = {SRCDIR}
top_srcdir = {TOP_SRCDIR}

# So that you have $(top_builddir)/config.status
top_builddir = {TOP_BUILDDIR}

## All the flags and other definitions are included here.
include $(top_builddir)/icudefs.mk

""".format(
        # TODO
        SRCDIR = ".",
        TOP_SRCDIR = "..",
        TOP_BUILDDIR = ".."
    )

    # Common Variables
    kwargs["common_vars_mak"] = { k: "$(%s)" % k for k in common_vars.keys() }
    for key, value in common_vars.items():
        makefile_string += "{KEY} = {VALUE}\n".format(
            KEY = key,
            VALUE = value
        )
    makefile_string += "\n"

    # Generate Rules
    make_rules = []
    for request in requests:
        make_rules += get_gnumake_rules_helper(request, **kwargs)

    # All output files, for "all" command
    all_output_files = set(file for rule in make_rules for file in rule.output_files)
    makefile_string += "ALL_OUT = %s\n\n" % files_to_makefile(sorted(all_output_files), **kwargs)

    # Variables for print commands
    for request in requests:
        if isinstance(request, PrintFileRequest):
            makefile_string += "define {NAME}_CONTENT\n{CONTENT}\nendef\nexport {NAME}_CONTENT\n\n".format(
                NAME = request.name.upper(),
                CONTENT = request.content
            )

    # Main Commands
    for rule in make_rules:
        if rule.name == "dirs":
            header_line = "dirs:"
        else:
            header_line = "{OUT_LIST}: {IN_LIST} | dirs".format(
                OUT_LIST = files_to_makefile(rule.output_files, **kwargs),
                IN_LIST = files_to_makefile(rule.input_files, **kwargs)
            )
        makefile_string += "{HEADER_LINE}\n{RULE_LINES}\n\n".format(
            HEADER_LINE = header_line,
            RULE_LINES = "\n".join("\t%s" % cmd for cmd in rule.cmds)
        )

    # Main Target
    makefile_string += "all: $(ALL_OUT)\n\n"

    return makefile_string

def files_to_makefile(files, is_nmake, common_vars_mak, **kwargs):
    if len(files) == 0:
        return ""
    dirnames = [dir_for(file).format(**common_vars_mak) for file in files]
    if len(files) == 1:
        return "%s/%s" % (dirnames[0], files[0].filename)
    if is_nmake or len(set(dirnames)) > 1:
        return " ".join("%s/%s" % (dirname, file.filename) for dirname, file in zip(dirnames, files))
    else:
        return "$(addprefix %s/,%s)" % (dirnames[0], " ".join(file.filename for file in files))

def get_gnumake_rules_helper(request, is_nmake, common_vars_mak, **kwargs):
    if isinstance(request, PrintFileRequest):
        if is_nmake or True:
            return [
                MakeRule(
                    name = request.name,
                    input_files = [],
                    output_files = [request.output_file],
                    cmds = [
                        "echo \"$${NAME}_CONTENT\" > {MAKEFILENAME}".format(**common_vars_mak,
                            NAME = request.name.upper(),
                            MAKEFILENAME = files_to_makefile([request.output_file], is_nmake, common_vars_mak, **kwargs)
                        )
                    ]
                )
            ]
        else:
            return [
                MakeRule(
                    name = request.name,
                    input_files = [],
                    output_files = [request.output_file],
                    cmds = [
                        "$(file >{MAKEFILENAME},{CONTENT})".format(**common_vars_mak,
                            MAKEFILENAME = files_to_makefile([request.output_file], is_nmake, common_vars_mak, **kwargs),
                            CONTENT = "\\ \n".join(request.content.split("\n"))
                        )
                    ]
                )
            ]

    if request.tool == "mkinstalldirs":
        template = "sh ../mkinstalldirs {ARGS}"
    else:
        template = "$(INVOKE) $(TOOLBINDIR)/{TOOL} {{ARGS}}".format(TOOL = request.tool)

    if isinstance(request, SingleExecutionRequest):
        cmd = template.format(ARGS = request.args.format(**common_vars_mak, **request.format_with,
            INPUT_FILES = request.input_files,
            OUTPUT_FILES = request.output_files,
        ))
        return [
            MakeRule(
                name = request.name,
                input_files = request.input_files,
                output_files = request.output_files,
                cmds = [cmd]
            )
        ]

    if isinstance(request, RepeatedExecutionRequest):
        rules = []
        for iter_vars, input_file, output_file in repeated_execution_request_looper(request):
            name_suffix = input_file[input_file.filename.rfind("/")+1:input_file.filename.rfind(".")]
            rules.append(MakeRule(
                name = "%s_%s" % (request.name, name_suffix),
                input_files = [input_file] + request.dep_files,
                output_files = [output_file],
                cmds = [template.format(ARGS = request.args.format(**common_vars_mak, **request.format_with, **iter_vars,
                    INPUT_FILE = input_file,
                    OUTPUT_FILE = output_file
                ))]
            ))
        return rules

    return []


def generate_index_file(locales, cldr_version, common_vars):
    formatted_version = "    CLDRVersion { \"%s\" }\n" % cldr_version if cldr_version else ""
    formatted_locales = "\n".join(["        %s {\"\"}" % v for v in locales])
    # TODO: CLDRVersion is required only in the base file
    return ("// Warning this file is automatically generated\n"
            "{INDEX_NAME}:table(nofallback) {{\n"
            "{FORMATTED_VERSION}"
            "    InstalledLocales {{\n"
            "{FORMATTED_LOCALES}\n"
            "    }}\n"
            "}}").format(**common_vars, FORMATTED_VERSION = formatted_version, FORMATTED_LOCALES = formatted_locales)


def main():
    args = flag_parser.parse_args()
    config = Config(args)

    requests = []

    common = {
        "IN_DIR": ".",
        "OUT_DIR": "outdir",
        "TMP_DIR": "tmpdir",
        "INDEX_NAME": "res_index",
        "ICUDATA_CHAR": "l",  # TODO: Pull from configure script
    }

    # DIRECTORIES
    build_dirs = ["{OUT_DIR}", "{OUT_DIR}/curr", "{OUT_DIR}/lang", "{OUT_DIR}/region", "{OUT_DIR}/zone", "{OUT_DIR}/unit", "{OUT_DIR}/brkitr", "{OUT_DIR}/coll", "{OUT_DIR}/rbnf", "{OUT_DIR}/translit", "{TMP_DIR}", "{TMP_DIR}/curr", "{TMP_DIR}/lang", "{TMP_DIR}/locales", "{TMP_DIR}/region", "{TMP_DIR}/zone", "{TMP_DIR}/unit", "{TMP_DIR}/coll", "{TMP_DIR}/rbnf", "{TMP_DIR}/translit", "{TMP_DIR}/brkitr"]
    requests += [
        SingleExecutionRequest(
            name = "dirs",
            input_files = [],
            output_files = [],
            tool = "mkinstalldirs",
            args = " ".join(build_dirs),
            format_with = {}
        )
    ]

    # CONFUSABLES
    if config.has_feature("confusables"):
        txt1 = InFile("unidata/confusables.txt")
        txt2 = InFile("unidata/confusablesWholeScript.txt")
        cfu = OutFile("confusables.cfu")
        requests += [
            SingleExecutionRequest(
                name = "confusables",
                input_files = [txt1, txt2],
                output_files = [cfu],
                tool = "gencfu",
                args = "-c -i {OUT_DIR} -r {IN_DIR}/{INPUT_FILES[0]} -w {IN_DIR}/{INPUT_FILES[1]} -o {OUT_DIR}/{OUTPUT_FILES[0]}",
                format_with = {}
            )
        ]

    # UConv Name Aliases
    if config.has_feature("cnvalias"):
        input_file = InFile("mappings/convrtrs.txt")
        output_file = OutFile("cnvalias.icu")
        requests += [
            SingleExecutionRequest(
                name = "cnvalias",
                input_files = [input_file],
                output_files = [output_file],
                tool = "gencnval",
                args = "-d {OUT_DIR} {IN_DIR}/{INPUT_FILES[0]}",
                format_with = {}
            )
        ]

    # UConv Conversion Table Files
    if config.has_feature("uconv"):
        input_files = [InFile(filename) for filename in glob("mappings/*.ucm")]
        output_files = [OutFile("%s.cnv") % v.filename[9:-4] for v in input_files]
        if config.max_parallel():
            # Do each cnv file on its own
            requests += [
                MultiExecutionRequest(
                    name = "uconv",
                    dep_files = [],
                    input_files = input_files,
                    output_files = output_files,
                    tool = "makeconv",
                    args = "-c -d {OUT_DIR} {IN_DIR}/{INPUT_FILE}",
                    format_with = {},
                    repeat_with = {}
                )
            ]
        else:
            # Do all cnv files in one command
            # Faster overall but cannot be parallelized
            requests += [
                SingleExecutionRequest(
                    name = "uconv",
                    input_files = input_files,
                    output_files = output_files,
                    tool = "makeconv",
                    args = "-c -d {OUT_DIR} {INPUT_FILES_SPACED}",
                    format_with = {
                        "INPUT_FILES_SPACED": " ".join(input_files)
                    }
                )
            ]

    # BRK Files
    if config.has_feature("brkitr"):
        input_files = [InFile(filename) for filename in glob("brkitr/rules/*.txt")]
        output_files = [OutFile("brkitr/%s.brk") % v.filename[13:-4] for v in input_files]
        requests += [
            RepeatedExecutionRequest(
                name = "brkitr_brk",
                dep_files = [],
                input_files = input_files,
                output_files = output_files,
                tool = "genbrk",
                args = "-c -i {IN_DIR} -r {IN_DIR}/{INPUT_FILE} -o {OUT_DIR}/{OUTPUT_FILE}",
                format_with = {},
                repeat_with = {}
            )
        ]

    # SPP FILES
    if config.has_feature("stringprep"):
        input_files = [InFile(filename) for filename in glob("sprep/*.txt")]
        output_files = [OutFile("%s.spp") % v.filename[6:-4] for v in input_files]
        bundle_names = [v[6:-4] for v.filename in input_files]
        requests += [
            RepeatedExecutionRequest(
                name = "stringprep",
                dep_files = [],
                input_files = input_files,
                output_files = output_files,
                tool = "gensprep",
                args = "-d {OUT_DIR} -i {OUT_DIR} -s {IN_DIR}/sprep -b {BUNDLE_NAME} -m {IN_DIR}/unidata -u 3.2.0 {BUNDLE_NAME}.txt",
                format_with = {},
                repeat_with = {
                    "BUNDLE_NAME": bundle_names
                }
            )
        ]

    # Dict Files
    if config.has_feature("dictionaries"):
        input_files = [InFile(filename) for filename in glob("brkitr/dictionaries/*.txt")]
        output_files = [OutFile("brkitr/%s.dict") % v.filename[20:-4] for v in input_files]
        extra_options_map = {
            "brkitr/dictionaries/burmesedict.txt": "--bytes --transform offset-0x1000",
            "brkitr/dictionaries/cjdict.txt": "--uchars",
            "brkitr/dictionaries/khmerdict.txt": "--bytes --transform offset-0x1780",
            "brkitr/dictionaries/laodict.txt": "--bytes --transform offset-0x0e80",
            "brkitr/dictionaries/thaidict.txt": "--bytes --transform offset-0x0e00"
        }
        extra_optionses = [extra_options_map[v] for v.filename in input_files]
        requests += [
            RepeatedExecutionRequest(
                name = "dictionaries",
                dep_files = [],
                input_files = input_files,
                output_files = output_files,
                tool = "gendict",
                args = "{EXTRA_OPTIONS} -c -i {OUT_DIR} {INPUT_FILE} {OUT_DIR}/{OUTPUT_FILE}",
                format_with = {},
                repeat_with = {
                    "EXTRA_OPTIONS": extra_optionses
                }
            )
        ]

    # NRM Files
    if config.has_feature("normalization"):
        input_files = [InFile(filename) for filename in glob("in/*.nrm")]
        input_files.remove(InFile("in/nfc.nrm"))  # nfc.nrm is pre-compiled into C++
        output_files = [OutFile("%s") % v.filename[3:] for v in input_files]
        requests += [
            RepeatedExecutionRequest(
                name = "normalization",
                dep_files = [],
                input_files = input_files,
                output_files = output_files,
                tool = "icupkg",
                args = "-t{ICUDATA_CHAR} {IN_DIR}/{INPUT_FILE} {OUT_DIR}/{OUTPUT_FILE}",
                format_with = {},
                repeat_with = {}
            )
        ]

    # Collation Dependency File (ucadata.icu)
    if config.has_feature("coll"):
        input_file = InFile("in/coll/ucadata-%s.icu" % config.coll_han_type())
        output_file = OutFile("coll/ucadata.icu")
        requests += [
            SingleExecutionRequest(
                name = "coll_ucadata",
                input_files = [input_file],
                output_files = [output_file],
                tool = "icupkg",
                args = "-t{ICUDATA_CHAR} {IN_DIR}/{INPUT_FILES[0]} {OUT_DIR}/{OUTPUT_FILES[0]}",
                format_with = {}
            )
        ]

    # Unicode Character Names
    if config.has_feature("unames"):
        input_file = InFile("in/unames.icu")
        output_file = OutFile("unames.icu")
        requests += [
            SingleExecutionRequest(
                name = "unames",
                input_files = [input_file],
                output_files = [output_file],
                tool = "icupkg",
                args = "-t{ICUDATA_CHAR} {IN_DIR}/{INPUT_FILES[0]} {OUT_DIR}/{OUTPUT_FILES[0]}",
                format_with = {}
            )
        ]

    # Misc Data Res Files
    if config.has_feature("misc"):
        # TODO: Treat each misc file separately
        input_files = [InFile(filename) for filename in glob("misc/*.txt")]
        input_basenames = [v.filename[5:] for v in input_files]
        output_files = [OutFile("%s.res") % v.filename[:-4] for v in input_basenames]
        requests += [
            RepeatedExecutionRequest(
                name = "misc",
                dep_files = [],
                input_files = input_files,
                output_files = output_files,
                tool = "genrb",
                args = "-k -q -i {OUT_DIR} -s {IN_DIR}/misc -d {OUT_DIR} {INPUT_BASENAME}",
                format_with = {},
                repeat_with = {
                    "INPUT_BASENAME": input_basenames
                }
            )
        ]

    # Specialized Locale Data Res Files
    specialized_sub_dirs = [
        # (input dirname, output dirname, resfiles.mk path, mk version var, mk source var, use pool file, dep files)
        ("locales",  None,       "resfiles.mk",  "GENRB_CLDR_VERSION",     "GENRB_SOURCE",     True,  []),
        ("curr",     "curr",     "resfiles.mk",  "CURR_CLDR_VERSION",      "CURR_SOURCE",      True,  []),
        ("lang",     "lang",     "resfiles.mk",  "LANG_CLDR_VERSION",      "LANG_SOURCE",      True,  []),
        ("region",   "region",   "resfiles.mk",  "REGION_CLDR_VERSION",    "REGION_SOURCE",    True,  []),
        ("zone",     "zone",     "resfiles.mk",  "ZONE_CLDR_VERSION",      "ZONE_SOURCE",      True,  []),
        ("unit",     "unit",     "resfiles.mk",  "UNIT_CLDR_VERSION",      "UNIT_SOURCE",      True,  []),
        ("coll",     "coll",     "colfiles.mk",  "COLLATION_CLDR_VERSION", "COLLATION_SOURCE", False, [OutFile("coll/ucadata.icu")]),
        ("brkitr",   "brkitr",   "brkfiles.mk",  "BRK_RES_CLDR_VERSION",   "BRK_RES_SOURCE",   False, []),
        ("rbnf",     "rbnf",     "rbnffiles.mk", "RBNF_CLDR_VERSION",      "RBNF_SOURCE",      False, []),
        ("translit", "translit", "trnsfiles.mk", None,                     "TRANSLIT_SOURCE",  False, [])
    ]

    for sub_dir, out_sub_dir, resfile_name, version_var, source_var, use_pool_bundle, dep_files in specialized_sub_dirs:
        out_prefix = "%s/" % out_sub_dir if out_sub_dir else ""
        extra_options = "--usePoolBundle" if use_pool_bundle else ""
        if config.has_feature(sub_dir):
            if use_pool_bundle:
                input_pool_files = [InFile("%s/pool.res" % sub_dir)]
            else:
                input_pool_files = []
            # TODO: Clean this up for translit
            if sub_dir == "translit":
                input_files = [InFile("translit/root.txt"), InFile("translit/en.txt"), InFile("translit/el.txt")]
            else:
                input_files = [InFile(filename) for filename in glob("%s/*.txt" % sub_dir)]
            input_basenames = [v.filename[len(sub_dir)+1:] for v in input_files]
            output_files = [OutFile("%s%s.res" % (out_prefix, v[:-4])) for v in input_basenames]
            if config.max_parallel():
                # Do each res file on its own
                requests += [
                    RepeatedExecutionRequest(
                        name = "%s_res" % sub_dir,
                        dep_files = dep_files + input_pool_files,
                        input_files = input_files,
                        output_files = output_files,
                        tool = "genrb",
                        args = "{EXTRA_OPTIONS} -k -i {OUT_DIR} -s {IN_DIR}/{IN_SUB_DIR} -d {OUT_DIR}/{OUT_PREFIX} {INPUT_BASENAME}",
                        format_with = {
                            "EXTRA_OPTIONS": extra_options,
                            "IN_SUB_DIR": sub_dir,
                            "OUT_PREFIX": out_prefix
                        },
                        repeat_with = {
                            "INPUT_BASENAME": input_basenames,
                        }
                    )
                ]
            else:
                # Do all res files in one command
                # Faster overall but cannot be parallelized
                requests += [
                    SingleExecutionRequest(
                        name = "%s_res" % sub_dir,
                        input_files = dep_files + input_pool_files + input_files,
                        output_files = output_files,
                        tool = "genrb",
                        args = "{EXTRA_OPTIONS} -k -i {OUT_DIR} -s {IN_DIR}/{IN_SUB_DIR} -d {OUT_DIR}/{OUT_PREFIX} {INPUT_BASENAMES_SPACED}",
                        format_with = {
                            "EXTRA_OPTIONS": extra_options,
                            "IN_SUB_DIR": sub_dir,
                            "OUT_PREFIX": out_prefix,
                            "INPUT_BASENAMES_SPACED": " ".join(input_basenames)
                        }
                    )
                ]
            # Generate index txt file
            if sub_dir != "translit":
                # TODO: Change .mk files to .py files so they can be loaded directly.
                # Reading these files as .py will be required for Bazel.
                mk_values = parse_makefile("{IN_DIR}/{IN_SUB_DIR}/{RESFILE_NAME}".format(**common, IN_SUB_DIR = sub_dir, RESFILE_NAME = resfile_name))
                cldr_version = mk_values[version_var] if version_var and sub_dir == "locales" else None
                locales = [v[:-4] for v in mk_values[source_var].split()]
                #locales = list(sorted(v[:-4] for v in mk_values["CURR_SOURCE"].split(" ")))
                index_file_txt = TmpFile("{IN_SUB_DIR}/{INDEX_NAME}.txt".format(**common, IN_SUB_DIR = sub_dir))
                requests += [
                    PrintFileRequest(
                        name = "%s_index_txt" % sub_dir,
                        output_file = index_file_txt,
                        content = generate_index_file(locales, cldr_version, common)
                    )
                ]
                # Generate index res file
                index_res_file = OutFile("{OUT_PREFIX}{INDEX_NAME}.res".format(**common, OUT_PREFIX = out_prefix))
                requests += [
                    SingleExecutionRequest(
                        name = "%s_index_res" % sub_dir,
                        input_files = [index_file_txt],
                        output_files = [index_res_file],
                        tool = "genrb",
                        args = "-k -i {OUT_DIR} -s {TMP_DIR}/{IN_SUB_DIR} -d {OUT_DIR}/{OUT_PREFIX} {INDEX_NAME}.txt",
                        format_with = {
                            "IN_SUB_DIR": sub_dir,
                            "OUT_PREFIX": out_prefix
                        }
                    )
                ]
            # Copy the pool file
            if use_pool_bundle:
                output_pool_file = OutFile("{OUT_PREFIX}pool.res".format(**common, OUT_PREFIX = out_prefix))
                requests += [
                    SingleExecutionRequest(
                        name = "%s_pool" % sub_dir,
                        input_files = input_pool_files,
                        output_files = [output_pool_file],
                        tool = "icupkg",
                        args = "-t{ICUDATA_CHAR} {IN_DIR}/{IN_SUB_DIR}/pool.res {OUT_DIR}/{OUT_PREFIX}pool.res",
                        format_with = {
                            "IN_SUB_DIR": sub_dir,
                            "OUT_PREFIX": out_prefix
                        }
                    )
                ]


    if args.format == "bash":
        print(get_command_lines(requests, common))
    elif args.format == "gnumake":
        print(get_gnumake_rules(requests, common, is_nmake = False))
    elif args.format == "nmake":
        print(get_gnumake_rules(requests, common, is_nmake = True))
    else:
        print("Format not supported: %s" % args.format)

main()
