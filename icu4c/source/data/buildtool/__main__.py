# Copyright (C) 2016 and later: Unicode, Inc. and others.
# License & terms of use: http://www.unicode.org/copyright.html

# Be compatible with both Python 2 and Python 3:
from __future__ import print_function

import argparse
import glob as pyglob
import sys

from . import *
from . import rules
from .renderers import bash, makefile, windirect

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
    choices = ["bash", "gnumake", "windirect"],
    required = True
)
flag_parser.add_argument(
    "--glob_dir",
    help = "Path to data input folder (icu4c/source/data) when this script is being run.",
    default = "."
)
flag_parser.add_argument(
    "--in_dir",
    help = "Path to data input folder (icu4c/source/data). For 'bash' format, this should be relative to your current working directory. For 'gnumake' format, this should be relative to the directory where the Makefile is to be saved.",
    default = "."
)
flag_parser.add_argument(
    "--out_dir",
    help = "Path to where to save output data files. Not used in gnumake format.",
    default = "icudata"
)
flag_parser.add_argument(
    "--pkg_dir",
    help = "Path to where to save the packaged data library.",
    default = "../lib"
)
flag_parser.add_argument(
    "--tmp_dir",
    help = "Path to where to save temporary files. Not used in gnumake format.",
    default = "icutmp"
)
flag_parser.add_argument(
    "--bin_dir",
    help = "Path to where to find binary tools (genrb, genbrk, etc). Used for 'bash' format only.",
    default = "../bin"
)
flag_parser.add_argument(
    "--mkinstalldirs",
    help = "Path to where to find the mkinstalldirs tool. Used for 'bash' format only.",
    default = "../mkinstalldirs"
)
flag_parser.add_argument(
    "--seqmode",
    help = "Whether to optimize rules to be run sequentially (fewer threads) or in parallel (many threads).",
    choices = ["sequential", "parallel"],
    default = "parallel"
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


def main():
    args = flag_parser.parse_args()
    config = Config(args)

    if args.format == "gnumake":
        makefile_vars = {
            "IN_DIR": "$(srcdir)",
            "PKG_DIR": args.pkg_dir,
            "INDEX_NAME": "res_index"
        }
        makefile_env = ["ICUDATA_CHAR", "ICUDATA_ENTRY_POINT", "ICUDATA_NAME", "ICUDATA_PLATFORM_NAME", "PKGDATA_MODE", "SO_TARGET_VERSION", "PKGDATA_LIBNAME", "OUT_DIR", "TMP_DIR"]
        common = {
            key: "$(%s)" % key
            for key in list(makefile_vars.keys()) + makefile_env
        }
        common["GLOB_DIR"] = args.glob_dir
    else:
        common = {
            "GLOB_DIR": args.glob_dir,
            "IN_DIR": args.in_dir,
            "OUT_DIR": args.out_dir,
            "TMP_DIR": args.tmp_dir,
            "INDEX_NAME": "res_index",
            # TODO: Pull these from configure script:
            "ICUDATA_CHAR": "l",
            "ICUDATA_PLATFORM_NAME": "icu63dtl"
        }

    print(common)

    def glob(pattern):
        result_paths = pyglob.glob("{IN_DIR}/{PATTERN}".format(
            IN_DIR = args.glob_dir,
            PATTERN = pattern
        ))
        # For the purposes of buildtool, force Unix-style directory separators.
        return [v.replace("\\", "/")[len(args.glob_dir)+1:] for v in sorted(result_paths)]

    if len(glob("misc/*")) == 0:
        print("Error: Cannot find data directory; please specify --glob_dir", file=sys.stderr)
        exit(1)

    build_dirs, requests = rules.generate(config, glob, common)

    if args.format == "bash":
        print(bash.get_command_lines(build_dirs, requests,
            common_vars = common,
            bin_dir = args.bin_dir,
            mkinstalldirs = args.mkinstalldirs
        ))
    elif args.format == "gnumake":
        print(makefile.get_gnumake_rules(build_dirs, requests, makefile_vars, common_vars = common))
    elif args.format == "windirect":
        return windirect.run(build_dirs, requests, common_vars = common, bin_dir = args.bin_dir)
    else:
        print("Format not supported: %s" % args.format)
        return 1
    return 0

if __name__ == "__main__":
    exit(main())
