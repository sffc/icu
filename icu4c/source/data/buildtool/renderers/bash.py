# Copyright (C) 2016 and later: Unicode, Inc. and others.
# License & terms of use: http://www.unicode.org/copyright.html

from .. import *
from .. import utils

def get_command_lines(requests, **kwargs):
    cmds = []
    for request in requests:
        cmds += get_command_lines_helper(request, **kwargs)
    return "\n".join(cmds)

def get_command_lines_helper(request, common_vars, bin_dir, mkinstalldirs):
    if isinstance(request, PrintFileRequest):
        output_path = "{DIRNAME}/{FILENAME}".format(
            DIRNAME = utils.dir_for(request.output_file).format(**common_vars),
            FILENAME = request.output_file.filename,
        )
        cmds = ["rm -f {OUTPUT_PATH}".format(**common_vars, OUTPUT_PATH = output_path)]
        cmds += [
            "echo \"{LINE}\" >> {OUTPUT_PATH}".format(**common_vars,
                OUTPUT_PATH = output_path,
                LINE = line.replace("\"", "\\\"")
            )
            for line in request.content.split("\n")]
        return cmds

    if request.tool == "mkinstalldirs":
        return ["sh {MKINSTALLDIRS} {ARGS}".format(**common_vars,
            MKINSTALLDIRS = mkinstalldirs,
            ARGS = request.args.format(**common_vars)
        )]

    template = "{BIN_DIR}/{TOOL} {{ARGS}}".format(**common_vars,
        BIN_DIR = bin_dir,
        TOOL = request.tool
    )
    if isinstance(request, RepeatedExecutionRequest):
        cmds = []
        for iter_vars, input_file, output_file in utils.repeated_execution_request_looper(request):
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
