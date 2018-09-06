# Copyright (C) 2016 and later: Unicode, Inc. and others.
# License & terms of use: http://www.unicode.org/copyright.html

from collections import namedtuple

AVAILABLE_FEATURES = ["confusables", "cnvalias", "uconv", "brkitr", "stringprep", "dictionaries", "normalization", "coll", "unames", "misc", "locales", "curr", "lang", "region", "zone", "unit", "rbnf", "translit"]

InFile = namedtuple("InFile", ["filename"])
TmpFile = namedtuple("TmpFile", ["filename"])
OutFile = namedtuple("OutFile", ["filename"])

SingleExecutionRequest = namedtuple("SingleExecutionRequest", ["name", "input_files", "output_files", "tool", "args", "format_with"])

RepeatedExecutionRequest = namedtuple("RepeatedExecutionRequest", ["name", "dep_files", "input_files", "output_files", "tool", "args", "format_with", "repeat_with"])

PrintFileRequest = namedtuple("PrintFileRequest", ["name", "output_file", "content"])

MakeRule = namedtuple("MakeRule", ["name", "dep_targets", "input_files", "output_files", "cmds"])
