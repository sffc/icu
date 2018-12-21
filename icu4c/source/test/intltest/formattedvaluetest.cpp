// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html

#include "unicode/utypes.h"

#if !UCONFIG_NO_FORMATTING

#include "unicode/formattedvalue.h"
#include "unicode/unum.h"
#include "intltest.h"


class FormattedValueTest : public IntlTest {
public:
    void runIndexedTest(int32_t index, UBool exec, const char *&name, char *par=0);
private:
    void testBasic();
    void testSetters();

    void assertAllPartsEqual(
        UnicodeString messagePrefix,
        const ConstrainedFieldPosition& cfpos,
        UCFPosConstraintType constraint,
        UFieldCategory category,
        int32_t field,
        int32_t start,
        int32_t limit,
        int64_t context);
};

void FormattedValueTest::runIndexedTest(int32_t index, UBool exec, const char *&name, char *) {
    if (exec) {
        logln("TestSuite FormattedValueTest: ");
    }
    TESTCASE_AUTO_BEGIN;
    TESTCASE_AUTO(testBasic);
    TESTCASE_AUTO(testSetters);
    TESTCASE_AUTO_END;
}


void FormattedValueTest::testBasic() {
    IcuTestErrorCode status(*this, "testBasic");
    ConstrainedFieldPosition cfpos;
    assertAllPartsEqual(
        u"basic",
        cfpos,
        UCFPOS_CONSTRAINT_NONE,
        UFIELD_CATEGORY_UNDEFINED,
        0,
        0,
        0,
        0LL);
}

void FormattedValueTest::testSetters() {
    IcuTestErrorCode status(*this, "testSetters");
    ConstrainedFieldPosition cfpos;

    cfpos.constrainCategory(UFIELD_CATEGORY_DATE);
    assertAllPartsEqual(
        u"setters 0",
        cfpos,
        UCFPOS_CONSTRAINT_CATEGORY,
        UFIELD_CATEGORY_DATE,
        0,
        0,
        0,
        0LL);

    cfpos.constrainField(UFIELD_CATEGORY_NUMBER, UNUM_COMPACT_FIELD);
    assertAllPartsEqual(
        u"setters 1",
        cfpos,
        UCFPOS_CONSTRAINT_FIELD,
        UFIELD_CATEGORY_NUMBER,
        UNUM_COMPACT_FIELD,
        0,
        0,
        0LL);

    cfpos.setInt64IterationContext(42424242424242LL);
    assertAllPartsEqual(
        u"setters 2",
        cfpos,
        UCFPOS_CONSTRAINT_FIELD,
        UFIELD_CATEGORY_NUMBER,
        UNUM_COMPACT_FIELD,
        0,
        0,
        42424242424242LL);

    cfpos.setState(UFIELD_CATEGORY_NUMBER, UNUM_COMPACT_FIELD, 5, 10);
    assertAllPartsEqual(
        u"setters 3",
        cfpos,
        UCFPOS_CONSTRAINT_FIELD,
        UFIELD_CATEGORY_NUMBER,
        UNUM_COMPACT_FIELD,
        5,
        10,
        42424242424242LL);
}

void FormattedValueTest::assertAllPartsEqual(
        UnicodeString messagePrefix,
        const ConstrainedFieldPosition& cfpos,
        UCFPosConstraintType constraint,
        UFieldCategory category,
        int32_t field,
        int32_t start,
        int32_t limit,
        int64_t context) {
    assertEquals(messagePrefix + u": constraint",
        constraint, cfpos.getConstraintType());
    assertEquals(messagePrefix + u": category",
        category, cfpos.getCategory());
    assertEquals(messagePrefix + u": field",
        field, cfpos.getField());
    assertEquals(messagePrefix + u": start",
        start, cfpos.getStart());
    assertEquals(messagePrefix + u": limit",
        limit, cfpos.getLimit());
    assertEquals(messagePrefix + u": context",
        context, cfpos.getInt64IterationContext());
}


extern IntlTest *createFormattedValueTest() {
    return new FormattedValueTest();
}

#endif /* !UCONFIG_NO_FORMATTING */
