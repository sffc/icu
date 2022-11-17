// © 2018 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html

#include "unicode/utypes.h"

#if !UCONFIG_NO_FORMATTING

#include "numbertest.h"
#include "unicode/numberformatter.h"
#include "unicode/simplenumber.h"

#include <cmath>
#include <numparse_affixes.h>


void SimpleNumberFormatterTest::runIndexedTest(int32_t index, UBool exec, const char*& name, char*) {
    if (exec) {
        logln("TestSuite SimpleNumberFormatterTest: ");
    }
    TESTCASE_AUTO_BEGIN;
        TESTCASE_AUTO(testBasic);
        TESTCASE_AUTO(testWithOptions);
    TESTCASE_AUTO_END;
}

void SimpleNumberFormatterTest::testBasic() {
    IcuTestErrorCode status(*this, "testBasic");

    SimpleNumber num = SimpleNumber::forInteger(-1000007, status);
    SimpleNumberFormatter snf = SimpleNumberFormatter::forLocale("de-CH", status);
    FormattedNumber result = snf.format(std::move(num), status);

    static const UFieldPosition expectedFieldPositions[] = {
        // field, begin index, end index
        {UNUM_SIGN_FIELD, 0, 1},
        {UNUM_GROUPING_SEPARATOR_FIELD, 2, 3},
        {UNUM_GROUPING_SEPARATOR_FIELD, 6, 7},
        {UNUM_INTEGER_FIELD, 1, 10},
    };
    checkFormattedValue(
        u"testBasic",
        result,
        u"-1’000’007",
        UFIELD_CATEGORY_NUMBER,
        expectedFieldPositions,
        UPRV_LENGTHOF(expectedFieldPositions));
}

void SimpleNumberFormatterTest::testWithOptions() {
    IcuTestErrorCode status(*this, "testWithOptions");

    SimpleNumber num = SimpleNumber::forInteger(1250000, status);
    num.multiplyByPowerOfTen(-2);
    num.roundTo(3, UNUM_ROUND_HALFUP);
    num.padStart(5);
    num.padEnd(2);
    num.truncateStart(4);
    num.setSign(UNUM_SIMPLE_NUMBER_PLUS_SIGN);
    SimpleNumberFormatter snf = SimpleNumberFormatter::forLocale("de-CH", status);
    FormattedNumber result = snf.format(std::move(num), status);

    static const UFieldPosition expectedFieldPositions[] = {
        // field, begin index, end index
        {UNUM_SIGN_FIELD, 0, 1},
        {UNUM_GROUPING_SEPARATOR_FIELD, 3, 4},
        {UNUM_INTEGER_FIELD, 1, 7},
        {UNUM_DECIMAL_SEPARATOR_FIELD, 7, 8},
        {UNUM_FRACTION_FIELD, 8, 10},
    };
    checkFormattedValue(
        u"testWithOptions",
        result,
        u"+03’000.00",
        UFIELD_CATEGORY_NUMBER,
        expectedFieldPositions,
        UPRV_LENGTHOF(expectedFieldPositions));
}


#endif
