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
        TESTCASE_AUTO(testSign);
        TESTCASE_AUTO(testCopyMove);
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
    num.setMinimumIntegerDigits(6, status);
    num.setMinimumFractionDigits(2, status);
    num.multiplyByPowerOfTen(-2, status);
    num.roundTo(3, UNUM_ROUND_HALFUP, status);
    num.truncateStart(4, status);
    SimpleNumberFormatter snf = SimpleNumberFormatter::forLocale("bn", status);
    FormattedNumber result = snf.format(std::move(num), status);

    static const UFieldPosition expectedFieldPositions[] = {
        // field, begin index, end index
        {UNUM_GROUPING_SEPARATOR_FIELD, 1, 2},
        {UNUM_GROUPING_SEPARATOR_FIELD, 4, 5},
        {UNUM_INTEGER_FIELD, 0, 8},
        {UNUM_DECIMAL_SEPARATOR_FIELD, 8, 9},
        {UNUM_FRACTION_FIELD, 9, 11},
    };
    checkFormattedValue(
        u"testWithOptions",
        result,
        u"০,০৩,০০০.০০",
        UFIELD_CATEGORY_NUMBER,
        expectedFieldPositions,
        UPRV_LENGTHOF(expectedFieldPositions));
}

void SimpleNumberFormatterTest::testSign() {
    IcuTestErrorCode status(*this, "testSign");

    SimpleNumberFormatter snf = SimpleNumberFormatter::forLocale("und", status);

    struct TestCase {
        int64_t input;
        USimpleNumberSign sign;
        const char16_t* expected;
    } cases[] = {
        { 1, UNUM_SIMPLE_NUMBER_NO_SIGN, u"1" },
        { 1, UNUM_SIMPLE_NUMBER_PLUS_SIGN, u"+1" },
        { 1, UNUM_SIMPLE_NUMBER_MINUS_SIGN, u"-1" },
        { 0, UNUM_SIMPLE_NUMBER_NO_SIGN, u"0" },
        { 0, UNUM_SIMPLE_NUMBER_PLUS_SIGN, u"+0" },
        { 0, UNUM_SIMPLE_NUMBER_MINUS_SIGN, u"-0" },
        { -1, UNUM_SIMPLE_NUMBER_NO_SIGN, u"1" },
        { -1, UNUM_SIMPLE_NUMBER_PLUS_SIGN, u"+1" },
        { -1, UNUM_SIMPLE_NUMBER_MINUS_SIGN, u"-1" },
    };
    for (auto& cas : cases) {
        SimpleNumber num = SimpleNumber::forInteger(cas.input, status);
        num.setSign(cas.sign, status);
        auto result = snf.format(std::move(num), status);
        assertEquals("", cas.expected, result.toTempString(status));
    }
}

void SimpleNumberFormatterTest::testCopyMove() {
    IcuTestErrorCode status(*this, "testCopyMove");

    SimpleNumberFormatter snf0 = SimpleNumberFormatter::forLocale("und", status);

    SimpleNumber sn0 = SimpleNumber::forInteger(55, status);
    SimpleNumber sn1 = std::move(sn0);

    snf0.format(std::move(sn0), status);
    status.expectErrorAndReset(U_ILLEGAL_ARGUMENT_ERROR, "Use of moved number");

    assertEquals("Move number constructor",
        u"55",
        snf0.format(std::move(sn1), status).toTempString(status));

    SimpleNumber sn2;
    snf0.format(std::move(sn2), status);
    status.expectErrorAndReset(U_ILLEGAL_ARGUMENT_ERROR, "Default constructed number");

    sn0 = SimpleNumber::forInteger(44, status);

    assertEquals("Move number assignment",
        u"44",
        snf0.format(std::move(sn0), status).toTempString(status));

    SimpleNumberFormatter snf1 = std::move(snf0);

    snf0.format(SimpleNumber::forInteger(22, status), status);
    status.expectErrorAndReset(U_INVALID_STATE_ERROR, "Use of moved formatter");

    assertEquals("Move formatter constructor",
        u"33",
        snf1.format(SimpleNumber::forInteger(33, status), status).toTempString(status));

    SimpleNumberFormatter snf2;
    snf2.format(SimpleNumber::forInteger(22, status), status);
    status.expectErrorAndReset(U_INVALID_STATE_ERROR, "Default constructed formatter");

    snf0 = std::move(snf1);

    assertEquals("Move formatter assignment",
        u"22",
        snf0.format(SimpleNumber::forInteger(22, status), status).toTempString(status));
}


#endif
