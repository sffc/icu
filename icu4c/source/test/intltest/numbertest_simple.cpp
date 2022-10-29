// © 2018 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html

#include "unicode/utypes.h"

#if !UCONFIG_NO_FORMATTING

#include "numbertest.h"
#include "unicode/numberformatter.h"

#include <cmath>
#include <numparse_affixes.h>


void SimpleNumberFormatterTest::runIndexedTest(int32_t index, UBool exec, const char*& name, char*) {
    if (exec) {
        logln("TestSuite SimpleNumberFormatterTest: ");
    }
    TESTCASE_AUTO_BEGIN;
        TESTCASE_AUTO(testBasic);
    TESTCASE_AUTO_END;
}

void SimpleNumberFormatterTest::testBasic() {
    IcuTestErrorCode status(*this, "testBasic");

    SimpleNumberFormatter snf = SimpleNumberFormatter::forLocale("de-CH", status);
    FormattedNumber result = snf.formatInt(1000007, status);

    static const UFieldPosition expectedFieldPositions[] = {
        // field, begin index, end index
        {UNUM_GROUPING_SEPARATOR_FIELD, 1, 2},
        {UNUM_GROUPING_SEPARATOR_FIELD, 5, 6},
        {UNUM_INTEGER_FIELD, 0, 9},
    };
    checkFormattedValue(
        u"testBasic",
        result,
        u"1’000’007",
        UFIELD_CATEGORY_NUMBER,
        expectedFieldPositions,
        UPRV_LENGTHOF(expectedFieldPositions));
}


#endif
