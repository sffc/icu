# Copyright (C) 2016 and later: Unicode, Inc. and others.
# License & terms of use: http://www.unicode.org/copyright.html

import argparse
import glob as pyglob

from . import *
from . import rules
from .renderers import bash, makefile

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


def main():
    args = flag_parser.parse_args()
    config = Config(args)

    common = {
        "IN_DIR": ".",
        "OUT_DIR": "outdir",
        "TMP_DIR": "tmpdir",
        "INDEX_NAME": "res_index",
        "ICUDATA_CHAR": "l",  # TODO: Pull from configure script
    }

    requests = rules.generate(config, glob, common)

    if args.format == "bash":
        print(bash.get_command_lines(requests, common))
    elif args.format == "gnumake":
        print(makefile.get_gnumake_rules(requests, common, is_nmake = False))
    elif args.format == "nmake":
        print(makefile.get_gnumake_rules(requests, common, is_nmake = True))
    else:
        print("Format not supported: %s" % args.format)

if __name__ == "__main__":
    main()
