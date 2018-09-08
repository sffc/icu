# Copyright (C) 2016 and later: Unicode, Inc. and others.
# License & terms of use: http://www.unicode.org/copyright.html

from . import *

def dir_for(file):
    if isinstance(file, InFile):
        return "{IN_DIR}"
    if isinstance(file, TmpFile):
        return "{TMP_DIR}"
    if isinstance(file, OutFile):
        return "{OUT_DIR}"
    if isinstance(file, PkgFile):
        return "{PKG_DIR}"
    assert False

def concat_dicts(*dicts):
    # There is not a super great way to do this in Python:
    # https://stackoverflow.com/q/38987/1407170
    new_dict = {}
    for dict in dicts:
        new_dict.update(dict)
    return new_dict

def repeated_execution_request_looper(request):
    # dictionary of lists to list of dictionaries:
    # https://stackoverflow.com/a/33046935/1407170
    ld = [dict(zip(request.repeat_with, t)) for t in zip(*request.repeat_with.values())]
    if not ld:
        # No special options given in repeat_with
        ld = [{} for _ in range(len(request.input_files))]
    return zip(ld, request.input_files, request.output_files)

def format_single_request_command(request, cmd_template, common_vars):
    return cmd_template.format(
        ARGS = request.args.format(
            INPUT_FILES = [file.filename for file in request.input_files],
            OUTPUT_FILES = [file.filename for file in request.output_files],
            **concat_dicts(common_vars, request.format_with)
        )
    )

def format_repeated_request_command(request, cmd_template, iter_vars, input_file, output_file, common_vars):
    return cmd_template.format(
        ARGS = request.args.format(
            INPUT_FILE = input_file.filename,
            OUTPUT_FILE = output_file.filename,
            **concat_dicts(common_vars, request.format_with, iter_vars)
        )
    )
