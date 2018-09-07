# Copyright (C) 2016 and later: Unicode, Inc. and others.
# License & terms of use: http://www.unicode.org/copyright.html

from . import *
from .. import *
from .. import utils

def get_gnumake_rules(build_dirs, requests, common_vars, **kwargs):
    makefile_string = """## Makefile for ICU data
## Copyright (C) 2018 and later: Unicode, Inc. and others.

## Source directory information
srcdir = {SRCDIR}
top_srcdir = {TOP_SRCDIR}

# So that you have $(top_builddir)/config.status
top_builddir = {TOP_BUILDDIR}

## All the flags and other definitions are included here.
include $(top_builddir)/icudefs.mk

## Build directory information
# So that  $(top_builddir)/$(subdir) ~= "here"
subdir = data

## Default target
all: all-local

""".format(
        # TODO
        SRCDIR = ".",
        TOP_SRCDIR = "..",
        TOP_BUILDDIR = ".."
    )

    # Common Variables
    common_vars_mak = { k: "$(%s)" % k for k in common_vars.keys() }
    kwargs["common_vars_mak"] = common_vars_mak
    for key, value in common_vars.items():
        makefile_string += "{KEY} = {VALUE}\n".format(
            KEY = key,
            VALUE = value
        )
    makefile_string += "\n"

    # Directories
    dirs_string = " ".join(build_dirs).format(**common_vars_mak)
    makefile_string += "DIRS = {DIRS}\n\n".format(DIRS = dirs_string)
    makefile_string += "$(DIRS):\n\t$(MKINSTALLDIRS) $(DIRS)\n\n"

    # Generate Rules
    make_rules = []
    for request in requests:
        make_rules += get_gnumake_rules_helper(request, **kwargs)

    # # All output files, for "all" command
    # all_output_files = set(file for rule in make_rules if isinstance(rule, MakeRule) for file in rule.output_files if isinstance(file, OutFile))
    # makefile_string += "ALL_OUT = %s\n\n" % files_to_makefile(sorted(all_output_files), **kwargs)

    # Main Commands
    for rule in make_rules:
        if isinstance(rule, MakeFilesVar):
            makefile_string += "{NAME} = {FILE_LIST}\n\n".format(
                NAME = rule.name,
                FILE_LIST = files_to_makefile(rule.files, **kwargs),
            )
            continue

        if isinstance(rule, MakeStringVar):
            makefile_string += "define {NAME}\n{CONTENT}\nendef\nexport {NAME}\n\n".format(
                NAME = rule.name,
                CONTENT = rule.content
            )
            continue

        assert isinstance(rule, MakeRule)
        header_line = "{OUT_FILE}: {DEP_FILES} {DEP_LITERALS} | $(DIRS)".format(
            OUT_FILE = files_to_makefile([rule.output_file], **kwargs),
            DEP_FILES = files_to_makefile(rule.dep_files, **kwargs),
            DEP_LITERALS = " ".join(rule.dep_literals)
        )

        if len(rule.cmds) == 0:
            makefile_string += "%s\n\n" % header_line
            continue

        makefile_string += "{HEADER_LINE}\n{RULE_LINES}\n\n".format(
            HEADER_LINE = header_line,
            RULE_LINES = "\n".join("\t%s" % cmd for cmd in rule.cmds)
        )

    makefile_string += """

## List of standard targets
all-local: $(ALL_OUT)
install: all
	echo "Error: install not supported yet"
clean:
	rm -r $(OUT_DIR)
	rm -r $(TMP_DIR)
distclean: clean
	rm Makefile
	rm pkgdataMakefile
dist:
	echo "Error: dist not supported yet"
check: all
check-exhaustive: check

###################################################################

icupkg.inc: pkgdataMakefile
	$(MAKE) -f pkgdataMakefile

pkgdataMakefile:
	cd $(top_builddir) \
	&& CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status

ifeq ($(PKGDATA_OPTS),)
PKGDATA_OPTS = -O $(top_builddir)/data/icupkg.inc
endif
ifeq ($(PKGDATA_VERSIONING),)
PKGDATA_VERSIONING = -r $(SO_TARGET_VERSION)
endif

PKGDATA_LIST = $(OUTTMPDIR)/icudata.lst

PKGDATA = $(TOOLBINDIR)/pkgdata $(PKGDATA_OPTS) -q -c -s $(CURDIR)/out/build/$(ICUDATA_PLATFORM_NAME) -d $(ICUPKGDATA_OUTDIR)

packagedata: icupkg.inc $(PKGDATA_LIST) build-local
ifneq ($(ENABLE_STATIC),)
ifeq ($(PKGDATA_MODE),dll)
	$(PKGDATA_INVOKE) $(PKGDATA) -e $(ICUDATA_ENTRY_POINT) -T $(TMP_DIR) -p $(ICUDATA_NAME) $(PKGDATA_LIBSTATICNAME) -m static $(PKGDATA_VERSIONING) $(PKGDATA_LIST)
endif
endif
ifneq ($(ICUDATA_SOURCE_IS_NATIVE_TARGET),YES)
	$(PKGDATA_INVOKE) $(PKGDATA) -e $(ICUDATA_ENTRY_POINT) -T $(TMP_DIR) -p $(ICUDATA_NAME) -m $(PKGDATA_MODE) $(PKGDATA_VERSIONING) $(PKGDATA_LIBNAME) $(PKGDATA_LIST)
else
	$(INSTALL_DATA) $(ICUDATA_SOURCE_ARCHIVE) $(OUTDIR)
endif
	echo timestamp > $@

"""

    return makefile_string

def files_to_makefile(files, is_nmake, common_vars_mak, **kwargs):
    if len(files) == 0:
        return ""
    dirnames = [utils.dir_for(file).format(**common_vars_mak) for file in files]
    if len(files) == 1:
        return "%s/%s" % (dirnames[0], files[0].filename)
    if is_nmake or len(set(dirnames)) > 1:
        return " ".join("%s/%s" % (dirname, file.filename) for dirname, file in zip(dirnames, files))
    else:
        return "$(addprefix %s/,%s)" % (dirnames[0], " ".join(file.filename for file in files))

def get_gnumake_rules_helper(request, is_nmake, common_vars_mak, **kwargs):

    if isinstance(request, PrintFileRequest):
        var_name = "%s_CONTENT" % request.name.upper()
        return [
            MakeStringVar(
                name = var_name,
                content = request.content
            ),
            MakeRule(
                name = request.name,
                dep_literals = [],
                dep_files = [],
                output_file = request.output_file,
                cmds = [
                    "echo \"$${VAR_NAME}\" > {MAKEFILENAME}".format(**common_vars_mak,
                        VAR_NAME = var_name,
                        MAKEFILENAME = files_to_makefile([request.output_file], is_nmake, common_vars_mak)
                    )
                ]
            )
        ]

    cmd_template = "$(INVOKE) $(TOOLBINDIR)/{TOOL} {{ARGS}}".format(TOOL = request.tool)

    if isinstance(request, SingleExecutionRequest):
        cmd = utils.format_single_request_command(request, cmd_template, common_vars_mak)

        if len(request.output_files) > 1:
            # Special case for multiple output files: Makefile rules should have only one output file apiece.
            # More information: https://www.gnu.org/software/automake/manual/html_node/Multiple-Outputs.html
            timestamp_var_name = "%s_ALL" % request.name.upper()
            timestamp_file = TmpFile("%s.timestamp" % request.name)
            rules = [
                MakeFilesVar(
                    name = timestamp_var_name,
                    files = [timestamp_file]
                ),
                MakeRule(
                    name = "%s_all" % request.name,
                    dep_literals = [],
                    dep_files = request.input_files,
                    output_file = timestamp_file,
                    cmds = [
                        cmd,
                        "echo timestamp > {MAKEFILENAME}".format(
                            MAKEFILENAME = files_to_makefile([timestamp_file], is_nmake, common_vars_mak)
                        )
                    ]
                )
            ]
            for i, file in enumerate(request.output_files):
                rules += [
                    MakeRule(
                        name = "%s_%d" % (request.name, i),
                        dep_literals = ["$(%s)" % timestamp_var_name],
                        dep_files = [],
                        output_file = file,
                        cmds = []
                    )
                ]
            return rules

        else:
            return [
                MakeRule(
                    name = request.name,
                    dep_literals = [],
                    dep_files = request.input_files,
                    output_file = request.output_files[0],
                    cmds = [cmd]
                )
            ]

    if isinstance(request, RepeatedExecutionRequest):
        rules = []
        dep_literals = []
        # To keep from repeating the same dep files many times, make a variable.
        if len(request.dep_files) > 0:
            dep_var_name = "%s_DEPS" % request.name.upper()
            dep_literals = ["$(%s)" % dep_var_name]
            rules += [
                MakeFilesVar(
                    name = dep_var_name,
                    files = request.dep_files
                )
            ]
        # Add a rule for each individual file.
        for iter_vars, input_file, output_file in utils.repeated_execution_request_looper(request):
            name_suffix = input_file[input_file.filename.rfind("/")+1:input_file.filename.rfind(".")]
            cmd = utils.format_repeated_request_command(request, cmd_template, iter_vars, input_file, output_file, common_vars_mak)
            rules += [
                MakeRule(
                    name = "%s_%s" % (request.name, name_suffix),
                    dep_literals = dep_literals,
                    dep_files = [input_file],
                    output_file = output_file,
                    cmds = [cmd]
                )
            ]
        return rules

    return []
