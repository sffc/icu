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


SingleExecutionRequest = namedtuple("SingleExecutionRequest", ["dep_files", "input_files", "output_files", "tool", "args", "format_with"])

RepeatedExecutionRequest = namedtuple("RepeatedExecutionRequest", ["dep_files", "input_files", "output_files", "tool", "args", "format_with", "repeat_with"])

PrintFileRequest = namedtuple("PrintFileRequest", ["output_file", "content"])


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
    return [v[len(in_dir)+1:] for v in result_paths]


def get_command_lines(request, common_vars):
    if isinstance(request, PrintFileRequest):
        cmds = ["rm -f {OUTPUT_FILE}".format(**common_vars, OUTPUT_FILE = request.output_file)]
        cmds += [
            "echo \"{LINE}\" >> {OUTPUT_FILE}".format(**common_vars,
                OUTPUT_FILE = request.output_file,
                LINE = line.replace("\"", "\\\"")
            )
            for line in request.content.split("\n")]
        return cmds

    if request.tool == "mkinstalldirs":
        return ["sh ../mkinstalldirs {ARGS}".format(ARGS = request.args)]

    template = "../bin/{TOOL} {{ARGS}}".format(TOOL = request.tool)
    if isinstance(request, RepeatedExecutionRequest):
        cmds = []
        # dictionary of lists to list of dictionaries:
        # https://stackoverflow.com/a/33046935/1407170
        ld = [dict(zip(request.repeat_with, t)) for t in zip(*request.repeat_with.values())]
        if not ld:
            # No special options given in repeat_with
            ld = [{} for _ in range(len(request.input_files))]
        for iter_vars, input_file, output_file in zip(ld, request.input_files, request.output_files):
            cmds.append(template.format(ARGS = request.args.format(**common_vars, **request.format_with, **iter_vars,
                INPUT_FILE = input_file,
                OUTPUT_FILE = output_file
            )))
        return cmds

    if isinstance(request, SingleExecutionRequest):
        return [template.format(ARGS = request.args.format(**common_vars, **request.format_with,
            INPUT_FILES = request.input_files,
            INPUT_FILES_SPACED = " ".join(request.input_files),
            OUTPUT_FILES = request.output_files,
        ))]

    assert False


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
    build_dirs = [v.format(**common) for v in ["{OUT_DIR}", "{OUT_DIR}/curr", "{OUT_DIR}/lang", "{OUT_DIR}/region", "{OUT_DIR}/zone", "{OUT_DIR}/unit", "{OUT_DIR}/brkitr", "{OUT_DIR}/coll", "{OUT_DIR}/rbnf", "{OUT_DIR}/translit", "{TMP_DIR}", "{TMP_DIR}/curr", "{TMP_DIR}/lang", "{TMP_DIR}/locales", "{TMP_DIR}/region", "{TMP_DIR}/zone", "{TMP_DIR}/unit", "{TMP_DIR}/coll", "{TMP_DIR}/rbnf", "{TMP_DIR}/translit", "{TMP_DIR}/brkitr"]]
    requests += [
        SingleExecutionRequest(
            dep_files = [],
            input_files = [],
            output_files = [],
            tool = "mkinstalldirs",
            args = " ".join(build_dirs),
            format_with = {}
        )
    ]

    # CONFUSABLES
    if config.has_feature("confusables"):
        txt1 = "unidata/confusables.txt"
        txt2 = "unidata/confusablesWholeScript.txt"
        cfu = "confusables.cfu"
        requests += [
            SingleExecutionRequest(
                dep_files = [],
                input_files = [txt1, txt2],
                output_files = [cfu],
                tool = "gencfu",
                args = "-c -i {OUT_DIR} -r {IN_DIR}/{INPUT_FILES[0]} -w {IN_DIR}/{INPUT_FILES[1]} -o {OUT_DIR}/{OUTPUT_FILES[0]}",
                format_with = {}
            )
        ]

    # UConv Name Aliases
    if config.has_feature("cnvalias"):
        input_file = "mappings/convrtrs.txt"
        output_file = "cnvalias.icu"
        requests += [
            SingleExecutionRequest(
                dep_files = [],
                input_files = [input_file],
                output_files = [output_file],
                tool = "gencnval",
                args = "-d {OUT_DIR} {IN_DIR}/{INPUT_FILES[0]}",
                format_with = {}
            )
        ]

    # UConv Conversion Table Files
    if config.has_feature("uconv"):
        input_files = glob("mappings/*.ucm")
        output_files = ["%s.cnv" % v[9:-4] for v in input_files]
        if config.max_parallel():
            # Do each cnv file on its own
            requests += [
                MultiExecutionRequest(
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
                    dep_files = [],
                    input_files = input_files,
                    output_files = output_files,
                    tool = "makeconv",
                    args = "-c -d {OUT_DIR} {INPUT_FILES_SPACED}",
                    format_with = {}
                )
            ]

    # BRK Files
    if config.has_feature("brkitr"):
        input_files = glob("brkitr/rules/*.txt")
        output_files = ["brkitr/%s.brk" % v[13:-4] for v in input_files]
        requests += [
            RepeatedExecutionRequest(
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
        input_files = glob("sprep/*.txt")
        output_files = ["%s.spp" % v[6:-4] for v in input_files]
        bundle_names = [v[6:-4] for v in input_files]
        requests += [
            RepeatedExecutionRequest(
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
        input_files = glob("brkitr/dictionaries/*.txt")
        output_files = ["brkitr/%s.dict" % v[20:-4] for v in input_files]
        extra_options_map = {
            "brkitr/dictionaries/burmesedict.txt": "--bytes --transform offset-0x1000",
            "brkitr/dictionaries/cjdict.txt": "--uchars",
            "brkitr/dictionaries/khmerdict.txt": "--bytes --transform offset-0x1780",
            "brkitr/dictionaries/laodict.txt": "--bytes --transform offset-0x0e80",
            "brkitr/dictionaries/thaidict.txt": "--bytes --transform offset-0x0e00"
        }
        extra_optionses = [extra_options_map[v] for v in input_files]
        requests += [
            RepeatedExecutionRequest(
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
        input_files = glob("in/*.nrm")
        input_files.remove("in/nfc.nrm")  # nfc.nrm is pre-compiled into C++
        output_files = ["%s" % v[3:] for v in input_files]
        requests += [
            RepeatedExecutionRequest(
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
        input_file = "in/coll/ucadata-%s.icu" % config.coll_han_type()
        output_file = "coll/ucadata.icu"
        requests += [
            SingleExecutionRequest(
                dep_files = [],
                input_files = [input_file],
                output_files = [output_file],
                tool = "icupkg",
                args = "-t{ICUDATA_CHAR} {IN_DIR}/{INPUT_FILES[0]} {OUT_DIR}/{OUTPUT_FILES[0]}",
                format_with = {}
            )
        ]

    # Unicode Character Names
    if config.has_feature("unames"):
        input_file = "in/unames.icu"
        output_file = "unames.icu"
        requests += [
            SingleExecutionRequest(
                dep_files = [],
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
        input_files = glob("misc/*.txt")
        input_basenames = [v[5:] for v in input_files]
        output_files = ["%s.res" % v[:-4] for v in input_basenames]
        requests += [
            RepeatedExecutionRequest(
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
        ("coll",     "coll",     "colfiles.mk",  "COLLATION_CLDR_VERSION", "COLLATION_SOURCE", False, ["coll/ucadata.icu"]),
        ("brkitr",   "brkitr",   "brkfiles.mk",  "BRK_RES_CLDR_VERSION",   "BRK_RES_SOURCE",   False, []),
        ("rbnf",     "rbnf",     "rbnffiles.mk", "RBNF_CLDR_VERSION",      "RBNF_SOURCE",      False, []),
        ("translit", "translit", "trnsfiles.mk", None,                     "TRANSLIT_SOURCE",  False, [])
    ]

    for sub_dir, out_sub_dir, resfile_name, version_var, source_var, use_pool_bundle, dep_files in specialized_sub_dirs:
        out_prefix = "%s/" % out_sub_dir if out_sub_dir else ""
        extra_options = "--usePoolBundle" if use_pool_bundle else ""
        if config.has_feature(sub_dir):
            input_pool_file = "%s/pool.res" % sub_dir
            # TODO: Clean this up for translit
            if sub_dir == "translit":
                input_files = ["translit/root.txt", "translit/en.txt", "translit/el.txt"]
            else:
                input_files = glob("%s/*.txt" % sub_dir)
            input_basenames = [v[len(sub_dir)+1:] for v in input_files]
            output_files = ["%s%s" % (out_prefix, v[:-4]) for v in input_basenames]
            if config.max_parallel():
                # Do each res file on its own
                requests += [
                    RepeatedExecutionRequest(
                        dep_files = dep_files + [input_pool_file],
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
                        dep_files = dep_files + [input_pool_file],
                        input_files = input_files,
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
                index_file_txt = "{TMP_DIR}/{IN_SUB_DIR}/{INDEX_NAME}.txt".format(**common, IN_SUB_DIR = sub_dir)
                requests += [
                    PrintFileRequest(
                        output_file = index_file_txt,
                        content = generate_index_file(locales, cldr_version, common)
                    )
                ]
                # Generate index res file
                index_res_file = "{OUT_DIR}/{OUT_PREFIX}{INDEX_NAME}.res".format(**common, OUT_PREFIX = out_prefix)
                requests += [
                    SingleExecutionRequest(
                        dep_files = [index_file_txt],
                        input_files = [],
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
                output_pool_file = " {OUT_DIR}/{OUT_PREFIX}pool.res".format(**common, OUT_PREFIX = out_prefix)
                requests += [
                    SingleExecutionRequest(
                        dep_files = [],
                        input_files = [input_pool_file],
                        output_files = [output_pool_file],
                        tool = "icupkg",
                        args = "-t{ICUDATA_CHAR} {IN_DIR}/{IN_SUB_DIR}/pool.res {OUT_DIR}/{OUT_PREFIX}pool.res",
                        format_with = {
                            "IN_SUB_DIR": sub_dir,
                            "OUT_PREFIX": out_prefix
                        }
                    )
                ]


    for request in requests:
        command_lines = get_command_lines(request, common)
        for command_line in command_lines:
            print(command_line)

main()
