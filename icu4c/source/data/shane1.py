# Copyright (C) 2016 and later: Unicode, Inc. and others.
# License & terms of use: http://www.unicode.org/copyright.html

from collections import namedtuple
import glob as pyglob

ExecutionRequest = namedtuple("ExecutionRequest", ["dep_files", "input_files", "output_files", "tool", "args"])


class Config(object):
    def has_feature(self, feature_name):
        # TODO
        if feature_name == "locale_data":
            return True
        if feature_name == "dictionaries":
            return False
        return False

    def max_parallel(self):
        return True

    def coll_han_type(self):
        # Either "unihan" or "implicithan"
        return "unihan"


def glob(pattern):
    in_dir = "." # TODO
    result_paths = pyglob.glob("{IN_DIR}/{PATTERN}".format(
        IN_DIR =in_dir,
        PATTERN = pattern
    ))
    return [v[len(in_dir)+1:] for v in result_paths]


def main():
    requests = []

    common = {
        "IN_DIR": ".",
        "OUT_DIR": "outdir",
        "TMP_DIR": "outdir/tmp",
        "ICUDATA_CHAR": "l" # TODO: Pull from configure script
    }

    config = Config()

    # DIRECTORIES
    build_dirs = [v.format(**common) for v in ["{OUT_DIR}", "{OUT_DIR}/curr", "{OUT_DIR}/lang", "{OUT_DIR}/region", "{OUT_DIR}/zone", "{OUT_DIR}/unit", "{OUT_DIR}/brkitr", "{OUT_DIR}/coll", "{OUT_DIR}/rbnf", "{OUT_DIR}/translit", "{TMP_DIR}", "{TMP_DIR}/curr", "{TMP_DIR}/lang", "{TMP_DIR}/region", "{TMP_DIR}/zone", "{TMP_DIR}/unit", "{TMP_DIR}/coll", "{TMP_DIR}/rbnf", "{TMP_DIR}/translit", "{TMP_DIR}/brkitr"]]
    requests += [
        ExecutionRequest(
            dep_files = [],
            input_files = [],
            output_files = [],
            tool = "mkinstalldirs",
            args = " ".join(build_dirs)
        )
    ]

    # CONFUSABLES
    if config.has_feature("confusables"):
        txt1 = "unidata/confusables.txt"
        txt2 = "unidata/confusablesWholeScript.txt"
        cfu = "confusables.cfu"
        requests += [
            ExecutionRequest(
                dep_files = [],
                input_files = [txt1, txt2],
                output_files = [cfu],
                tool = "gencfu",
                args = "-c -i {OUT_DIR} -r {IN_DIR}/{TXT1} -w {IN_DIR}/{TXT2} -o {OUT_DIR}/{CFU}".format(**common,
                    TXT1 = txt1,
                    TXT2 = txt2,
                    CFU = cfu
                )
            )
        ]

    # UConv Name Aliases
    if config.has_feature("cnvalias"):
        input_file = "mappings/convrtrs.txt"
        output_file = "cnvalias.icu"
        requests += [
            ExecutionRequest(
                dep_files = [],
                input_files = [input_file],
                output_files = [output_file],
                tool = "gencnval",
                args = "-d {OUT_DIR} {IN_DIR}/{INPUT_FILE}".format(**common,
                    INPUT_FILE = input_file,
                    OUTPUT_FILE = output_file
                )
            )
        ]

    # UConv Conversion Table Files
    if config.has_feature("uconv"):
        input_files = glob("mappings/*.ucm")
        output_files = ["%s.cnv" % v[9:-4] for v in input_files]
        if config.max_parallel():
            # Do each cnv file on its own
            requests += [
                ExecutionRequest(
                    dep_files = [],
                    input_files = [input_file],
                    output_files = [output_file],
                    tool = "makeconv",
                    args = "-c -d {OUT_DIR} {IN_DIR}/{INPUT_FILE}".format(**common,
                        INPUT_FILE = input_file
                    )
                )
                for (input_file, output_file) in zip(input_files, output_files)
            ]
        else:
            # Do all cnv files in one command
            # Faster overall but cannot be parallelized
            requests += [
                ExecutionRequest(
                    dep_files = [],
                    input_files = input_files,
                    output_files = output_files,
                    tool = "makeconv",
                    args = "-c -d {OUT_DIR} {INPUT_FILES}".format(**common,
                        INPUT_FILES = " ".join(input_files)
                    )
                )
            ]

    # BRK Files
    if config.has_feature("break-iterator"):
        input_files = glob("brkitr/rules/*.txt")
        output_files = ["brkitr/%s.brk" % v[13:-4] for v in input_files]
        requests += [
            ExecutionRequest(
                dep_files = [],
                input_files = [input_file],
                output_files = [output_file],
                tool = "genbrk",
                args = "-c -i {IN_DIR} -r {IN_DIR}/{INPUT_FILE} -o {OUT_DIR}/{OUTPUT_FILE}".format(**common,
                    INPUT_FILE = input_file,
                    OUTPUT_FILE = output_file
                )
            )
            for (input_file, output_file) in zip(input_files, output_files)
        ]

    # SPP FILES
    if config.has_feature("string-prep"):
        input_files = glob("sprep/*.txt")
        output_files = ["%s.spp" % v[6:-4] for v in input_files]
        bundle_names = [v[6:-4] for v in input_files]
        requests += [
            ExecutionRequest(
                dep_files = [],
                input_files = [input_file],
                output_files = [output_file],
                tool = "gensprep",
                args = "-d {OUT_DIR} -i {OUT_DIR} -s {IN_DIR}/sprep -b {BUNDLE_NAME} -m {IN_DIR}/unidata -u 3.2.0 {BUNDLE_NAME}.txt".format(**common,
                    INPUT_FILE = input_file,
                    OUTPUT_FILE = output_file,
                    BUNDLE_NAME = bundle_name
                )
            )
            for (input_file, output_file, bundle_name) in zip(input_files, output_files, bundle_names)
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
            ExecutionRequest(
                dep_files = [],
                input_files = [input_file],
                output_files = [output_file],
                tool = "gendict",
                args = "{EXTRA_OPTIONS} -c -i {OUT_DIR} {INPUT_FILE} {OUTPUT_FILE}".format(**common,
                    INPUT_FILE = input_file,
                    OUTPUT_FILE = output_file,
                    EXTRA_OPTIONS = extra_options
                )
            )
            for (input_file, output_file, extra_options) in zip(input_files, output_files, extra_optionses)
        ]

    # NRM Files
    if config.has_feature("normalization"):
        input_files = glob("in/*.nrm")
        input_files.remove("in/nfc.nrm")  # nfc.nrm is pre-compiled into C++
        output_files = ["%s" % v[3:] for v in input_files]
        requests += [
            ExecutionRequest(
                dep_files = [],
                input_files = [input_file],
                output_files = [output_file],
                tool = "icupkg",
                args = "-t{ICUDATA_CHAR} {IN_DIR}/{INPUT_FILE} {OUT_DIR}/{OUTPUT_FILE}".format(**common,
                    INPUT_FILE = input_file,
                    OUTPUT_FILE = output_file
                )
            )
            for (input_file, output_file) in zip(input_files, output_files)
        ]

    # Collation Dependency File (ucadata.icu)
    if config.has_feature("coll"):
        input_file = "in/coll/ucadata-%s.icu" % config.coll_han_type()
        output_file = "coll/ucadata.icu"
        requests += [
            ExecutionRequest(
                dep_files = [],
                input_files = [input_file],
                output_files = [output_file],
                tool = "icupkg",
                args = "-t{ICUDATA_CHAR} {IN_DIR}/{INPUT_FILE} {OUT_DIR}/{OUTPUT_FILE}".format(**common,
                    INPUT_FILE = input_file,
                    OUTPUT_FILE = output_file
                )
            )
        ]

    # Unicode Character Names
    if config.has_feature("unames"):
        input_file = "in/unames.icu"
        output_file = "unames.icu"
        requests += [
            ExecutionRequest(
                dep_files = [],
                input_files = [input_file],
                output_files = [output_file],
                tool = "icupkg",
                args = "-t{ICUDATA_CHAR} {IN_DIR}/{INPUT_FILE} {OUT_DIR}/{OUTPUT_FILE}".format(**common,
                    INPUT_FILE = input_file,
                    OUTPUT_FILE = output_file
                )
            )
        ]

    # Misc Data Res Files
    if config.has_feature("misc"):
        # TODO: Treat each misc file separately
        input_files = glob("misc/*.txt")
        input_basenames = [v[5:] for v in input_files]
        output_files = ["%s.res" % v[:-4] for v in input_basenames]
        requests += [
            ExecutionRequest(
                dep_files = [],
                input_files = [input_file],
                output_files = [output_file],
                tool = "genrb",
                args = "-k -q -i {OUT_DIR} -s {IN_DIR}/misc -d {OUT_DIR} {INPUT_BASENAME}".format(**common,
                    INPUT_BASENAME = input_basename
                )
            )
            for (input_file, output_file, input_basename) in zip(input_files, output_files, input_basenames)
        ]

    # Main Locale Data Res Files
    if config.has_feature("locale_data"):
        input_files = glob("locales/*.txt")
        input_basenames = [v[8:] for v in input_files]
        output_files = ["%s.res" % v[:-4] for v in input_basenames]
        if config.max_parallel():
            # Do each res file on its own
            requests += [
                ExecutionRequest(
                    dep_files = [],
                    input_files = [input_file],
                    output_files = [output_file],
                    tool = "genrb",
                    args = "--usePoolBundle -k -i {OUT_DIR} -s {IN_DIR}/locales -d {OUT_DIR} {INPUT_BASENAME}".format(**common,
                        INPUT_BASENAME = input_basename
                    )
                )
                for (input_file, output_file, input_basename) in zip(input_files, output_files, input_basenames)
            ]
        else:
            # Do all res files in one command
            # Faster overall but cannot be parallelized
            requests += [
                ExecutionRequest(
                    dep_files = [],
                    input_files = input_files,
                    output_files = output_files,
                    tool = "genrb",
                    args = "--usePoolBundle -k -i {OUT_DIR} -s {IN_DIR}/locales -d {OUT_DIR} {INPUT_BASENAMES}".format(**common,
                        INPUT_BASENAMES = " ".join(input_basenames)
                    )
                )
            ]

    # Specialized Locale Data Res Files
    specialized_sub_dirs = [
        # (dirname, use pool bundle?)
        ("curr", True),
        ("lang", True),
        ("region", True),
        ("zone", True),
        ("unit", True),
        ("coll", False),
        ("rbnf", False),
        ("translit", False)
    ]
    for sub_dir, use_pool_bundle in specialized_sub_dirs:
        if config.has_feature(sub_dir):
            dep_files = ["coll/ucadata.icu"] if sub_dir == "coll" else []
            input_files = glob("%s/*.txt" % sub_dir)
            input_basenames = [v[len(sub_dir)+1:] for v in input_files]
            output_files = ["%s.res" % v[:-4] for v in input_basenames]
            if config.max_parallel():
                # Do each res file on its own
                requests += [
                    ExecutionRequest(
                        dep_files = dep_files,
                        input_files = [input_file],
                        output_files = [output_file],
                        tool = "genrb",
                        args = "{POOL_BUNDLE} -k -i {OUT_DIR} -s {IN_DIR}/{SUB_DIR} -d {OUT_DIR}/{SUB_DIR} {INPUT_BASENAME}".format(**common,
                            POOL_BUNDLE = "--usePoolBundle" if use_pool_bundle else "",
                            SUB_DIR = sub_dir,
                            INPUT_BASENAME = input_basename
                        )
                    )
                    for (input_file, output_file, input_basename) in zip(input_files, output_files, input_basenames)
                ]
            else:
                # Do all res files in one command
                # Faster overall but cannot be parallelized
                requests += [
                    ExecutionRequest(
                        dep_files = dep_files,
                        input_files = input_files,
                        output_files = output_files,
                        tool = "genrb",
                        args = "{POOL_BUNDLE} -k -i {OUT_DIR} -s {IN_DIR}/{SUB_DIR} -d {OUT_DIR}/{SUB_DIR} {INPUT_BASENAMES}".format(**common,
                            POOL_BUNDLE = "--usePoolBundle" if use_pool_bundle else "",
                            SUB_DIR = sub_dir,
                            INPUT_BASENAMES = " ".join(input_basenames)
                        )
                    )
                ]


    for request in requests:
        tool_path = "../bin/{TOOL}".format(TOOL = request.tool)
        if request.tool == "mkinstalldirs":
            tool_path = "sh ../mkinstalldirs"
        command_line = "{TOOL_PATH} {ARGS}".format(TOOL_PATH = tool_path, ARGS = request.args)
        print(command_line)

main()
