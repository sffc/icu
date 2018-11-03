# Copyright (C) 2016 and later: Unicode, Inc. and others.
# License & terms of use: http://www.unicode.org/copyright.html
#**********************************************************************
#* Copyright (C) 1999-2015, International Business Machines Corporation
#* and others.  All Rights Reserved.
#**********************************************************************
#
#   03/19/2001  weiv, schererm  Created

.SUFFIXES : .res .txt

TESTPKG=testdata
TESTDT=$(TESTPKG)


ALL : "$(TESTDATAOUT)\testdata.dat" 
	@echo Test data is built.

# old_l_testtypes.res is there for cintltst/udatatst.c/TestSwapData()
# I generated it with an ICU 4.2.1 build on Linux after removing
# testincludeUTF (which would make it large, unnecessarily for this test)
# and renaming the collations element to avoid build CollationElements
# (which will not work with a newer swapper)
# markus 2010jan15

# old_e_testtypes.res is the same, but icuswapped to big-endian EBCDIC

TESTDATATMP="$(TESTDATAOUT)\testdata"

CREATE_DIRS :
	@if not exist "$(TESTDATAOUT)\$(NULL)" mkdir "$(TESTDATAOUT)"
	@if not exist "$(TESTDATABLD)\$(NULL)" mkdir "$(TESTDATABLD)"
	@if not exist "$(TESTDATATMP)\$(NULL)" mkdir "$(TESTDATATMP)"

#"$(TESTDATAOUT)\testdata.dat" : CREATE_DIRS $(TEST_RES_FILES) "$(TESTDATABLD)\casing.res" "$(TESTDATABLD)\conversion.res" "$(TESTDATABLD)\icuio.res" "$(TESTDATABLD)\mc.res" "$(TESTDATABLD)\structLocale.res" "$(TESTDATABLD)\root.res" "$(TESTDATABLD)\sh.res" "$(TESTDATABLD)\sh_YU.res"  "$(TESTDATABLD)\te.res" "$(TESTDATABLD)\te_IN.res" "$(TESTDATABLD)\te_IN_REVISED.res" "$(TESTDATABLD)\testaliases.res" "$(TESTDATABLD)\testtypes.res" "$(TESTDATABLD)\testempty.res" "$(TESTDATABLD)\encoded.res" "$(TESTDATABLD)\idna_rules.res" "$(TESTDATABLD)\test.icu" "$(TESTDATABLD)\testtable32.res" "$(TESTDATABLD)\test1.cnv" "$(TESTDATABLD)\test1bmp.cnv" "$(TESTDATABLD)\test2.cnv" "$(TESTDATABLD)\test3.cnv" "$(TESTDATABLD)\test4.cnv" "$(TESTDATABLD)\test4x.cnv" "$(TESTDATABLD)\test5.cnv" "$(TESTDATABLD)\ibm9027.cnv" "$(TESTDATABLD)\nfscsi.spp" "$(TESTDATABLD)\nfscss.spp" "$(TESTDATABLD)\nfscis.spp" "$(TESTDATABLD)\nfsmxs.spp" "$(TESTDATABLD)\nfsmxp.spp" "$(TESTDATABLD)\testnorm.nrm" "$(TESTDATABLD)\zoneinfo64.res"
"$(TESTDATAOUT)\testdata.dat" :
	@echo Building test data
	set PYTHONPATH=$(ICUSRCDATA);%PYTHONPATH%
	py -3 -m buildtool \
		--format windirect \
		--bin_dir "$(DLL_OUTPUT)" \
		--tool_dir "$(ICUTOOLS)" \
		--tool_cfg "$(CFG)" \
		--glob_dir "$(TESTDATA)" \
		--in_dir "$(TESTDATA)" \
		--tmp_dir "$(TESTDATATMP)" \
		--out_dir "$(TESTDATABLD)"
	@copy "$(TESTDATABLD)\te.res" "$(TESTDATATMP)\nam.typ"
	@copy "$(TESTDATA)\old_l_testtypes.res" "$(TESTDATABLD)"
	@copy "$(TESTDATA)\old_e_testtypes.res" "$(TESTDATABLD)"
	@copy "$(TESTDATABLD)\zoneinfo64.res" "$(TESTDATATMP)"
	"$(ICUPBIN)\pkgdata" -f -v -m common -c -p"$(TESTPKG)" -d "$(TESTDATAOUT)" -T "$(TESTDATABLD)" -s "$(TESTDATABLD)" $(TESTDATATMP)\testdata.lst
