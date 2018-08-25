# Copyright (C) 2016 and later: Unicode, Inc. and others.
# License & terms of use: http://www.unicode.org/copyright.html

from collections import namedtuple

ExecutionRequest = namedtuple("ExecutionRequest", ["input_files", "output_files", "tool", "args"])


class Config(object):
    def has_feature(self, feature_name):
        # TODO
        if feature_name == "dictionaries":
            return False
        return True


def main():
    requests = []

    common = {
        "IN_DIR": ".",
        "OUT_DIR": "outdir",
        "TMP_DIR": "outdir/tmp"
    }

    config = Config()

    # DIRECTORIES
    build_dirs = [v.format(**common) for v in ["{OUT_DIR}", "{OUT_DIR}/curr", "{OUT_DIR}/lang", "{OUT_DIR}/region", "{OUT_DIR}/zone", "{OUT_DIR}/unit", "{OUT_DIR}/brkitr", "{OUT_DIR}/coll", "{OUT_DIR}/rbnf", "{OUT_DIR}/translit", "{TMP_DIR}", "{TMP_DIR}/curr", "{TMP_DIR}/lang", "{TMP_DIR}/region", "{TMP_DIR}/zone", "{TMP_DIR}/unit", "{TMP_DIR}/coll", "{TMP_DIR}/rbnf", "{TMP_DIR}/translit", "{TMP_DIR}/brkitr"]]
    requests += [
        ExecutionRequest(
            input_files = [],
            output_files = [],
            tool = "mkinstalldirs",
            args = " ".join(build_dirs)
        )
    ]

    # General-purpose data files
    # TODO

    # CONFUSABLES
    if config.has_feature("confusables"):
        txt1 = "unidata/confusables.txt"
        txt2 = "unidata/confusablesWholeScript.txt"
        cfu = "confusables.cfu"
        requests += [
            ExecutionRequest(
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

    # CNV Files
    if config.has_feature("uconv"):
        input_basenames = ["ibm-912_P100-1995.ucm", "ibm-913_P100-2000.ucm"] # TODO
        input_files = ["mappings/%s" % v for v in input_basenames]
        output_files = ["%s.cnv" % v[:-4] for v in input_basenames]
        # TODO: Do all in one command?
        requests += [
            ExecutionRequest(
                input_files = [input_file],
                output_files = [output_file],
                tool = "makeconv",
                args = "-c -d {OUT_DIR} {IN_DIR}/{INPUT_FILE}".format(**common,
                    INPUT_FILE = input_file
                )
            )
            for (input_file, output_file) in zip(input_files, output_files)
        ]

    # BRK Files
    if config.has_feature("break-iterator"):
        input_basenames = ["char.txt", "line_loose_cj.txt", "line_loose.txt"] # TODO
        input_files = ["brkitr/rules/%s" % v for v in input_basenames]
        output_files = ["brkitr/%s.brk" % v[:-4] for v in input_basenames]
        requests += [
            ExecutionRequest(
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
    # TODO: What is this?
    if config.has_feature("string-prep"):
        input_basenames = ["rfc3491.txt", "rfc3530cs.txt"] # TODO
        bundle_names = [v[:-4] for v in input_basenames]
        input_files = ["sprep/%s" % v for v in input_basenames]
        output_files = ["%s.spp" % v for v in bundle_names]
        requests += [
            ExecutionRequest(
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
        input_basenames = ["burmesedict.txt", "cjdict.txt", "khmerdict.txt", "laodict.txt", "thaidict.txt"] # TODO
        input_files = ["brkitr/dictionaries/%s" % v for v in input_basenames]
        output_files = ["brkitr/%s.dict" % v[:-4] for v in input_basenames]
        extra_options_map = {
            "burmesedict.txt": "--bytes --transform offset-0x1000",
            "cjdict.txt": "--uchars",
            "khmerdict.txt": "--bytes --transform offset-0x1780",
            "laodict.txt": "--bytes --transform offset-0x0e80",
            "thaidict.txt": "--bytes --transform offset-0x0e00"
        }
        extra_optionses = [extra_options_map[v] for v in input_basenames]
        requests += [
            ExecutionRequest(
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

    # Misc Data Res Files
    if config.has_feature("misc"):
        input_basenames = ["metaZones.txt", "numberingSystems.txt", "supplementalData.txt"] # TODO
        sub_dir = "misc"
        input_files = ["%s/%s" % (sub_dir, v) for v in input_basenames]
        output_files = ["%s.res" % v[:-4] for v in input_basenames]
        requests += [
            ExecutionRequest(
                input_files = [input_file],
                output_files = [output_file],
                tool = "genrb",
                args = "-k -q -i {OUT_DIR} -s {IN_DIR}/{SUB_DIR} -d {OUT_DIR} {INPUT_BASENAME}".format(**common,
                    SUB_DIR = sub_dir,
                    INPUT_BASENAME = input_basename
                )
            )
            for (input_file, output_file, input_basename) in zip(input_files, output_files, input_basenames)
        ]

    # Main Locale Data Res Files
    if config.has_feature("locale_data"):
        input_basenames = ["root.txt", "af.txt", "af_NA.txt", "af_ZA.txt"] # TODO
        sub_dir = "locales"
        input_files = ["%s/%s" % (sub_dir, v) for v in input_basenames]
        output_files = ["%s.res" % v[:-4] for v in input_basenames]
        requests += [
            ExecutionRequest(
                input_files = [input_file],
                output_files = [output_file],
                tool = "genrb",
                args = "--usePoolBundle -k -i {OUT_DIR} -s {IN_DIR}/{SUB_DIR} -d {OUT_DIR} {INPUT_BASENAME}".format(**common,
                    SUB_DIR = sub_dir,
                    INPUT_BASENAME = input_basename
                )
            )
            for (input_file, output_file, input_basename) in zip(input_files, output_files, input_basenames)
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
            input_basenames = ["root.txt", "af.txt"] # TODO
            input_files = ["%s/%s" % (sub_dir, v) for v in input_basenames]
            output_files = ["%s.res" % v[:-4] for v in input_basenames]
            requests += [
                ExecutionRequest(
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


    for request in requests:
        tool_path = "../bin/{TOOL}".format(TOOL = request.tool)
        if request.tool == "mkinstalldirs":
            tool_path = "sh ../mkinstalldirs"
        command_line = "{TOOL_PATH} {ARGS}".format(TOOL_PATH = tool_path, ARGS = request.args)
        print(command_line)

main()
