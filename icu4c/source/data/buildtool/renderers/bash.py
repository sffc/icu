# Copyright (C) 2016 and later: Unicode, Inc. and others.
# License & terms of use: http://www.unicode.org/copyright.html

from .. import *
from .. import utils

def get_command_lines(build_dirs, requests, common_vars, mkinstalldirs, **kwargs):
    cmds = [
        "sh {MKINSTALLDIRS} {DIRS}".format(
            MKINSTALLDIRS = mkinstalldirs,
            DIRS = " ".join(build_dirs).format(**common_vars),
            **common_vars
        )
    ]
    for request in requests:
        cmds += get_command_lines_helper(request, common_vars, mkinstalldirs, **kwargs)
    return "\n".join(cmds)

def get_command_lines_helper(request, common_vars, mkinstalldirs, bin_dir):
    if isinstance(request, PrintFileRequest):
        output_path = "{DIRNAME}/{FILENAME}".format(
            DIRNAME = utils.dir_for(request.output_file).format(**common_vars),
            FILENAME = request.output_file.filename,
        )
        cmds = ["rm -f {OUTPUT_PATH}".format(OUTPUT_PATH = output_path, **common_vars)]
        cmds += [
            "echo \"{LINE}\" >> {OUTPUT_PATH}".format(
                OUTPUT_PATH = output_path,
                LINE = line.replace("\"", "\\\""),
                **common_vars
            )
            for line in request.content.split("\n")]
        return cmds

    cmd_template = "{BIN_DIR}/{TOOL} {{ARGS}}".format(
        BIN_DIR = bin_dir,
        TOOL = request.tool,
        **common_vars
    )
    if isinstance(request, RepeatedExecutionRequest):
        return [
            utils.format_repeated_request_command(request, cmd_template, iter_vars, input_file, output_file, common_vars)
            for iter_vars, input_file, output_file in utils.repeated_execution_request_looper(request)
        ]

    if isinstance(request, SingleExecutionRequest):
        return [
            utils.format_single_request_command(request, cmd_template, common_vars)
        ]

    assert False
