// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html

#include "unicode/utypes.h"

#if !UCONFIG_NO_FORMATTING

#include "unicode/formattedvalue.h"
#include "intltest.h"


class FormattedValueTest : public IntlTest {
public:
    void runIndexedTest(int32_t index, UBool exec, const char *&name, char *par=0);
private:
    void testBasic();
};

void FormattedValueTest::runIndexedTest(int32_t index, UBool exec, const char *&name, char *) {
    if (exec) {
        logln("TestSuite FormattedValueTest: ");
    }
    TESTCASE_AUTO_BEGIN;
    TESTCASE_AUTO(testBasic);
    TESTCASE_AUTO_END;
}


void FormattedValueTest::testBasic() {
    IcuTestErrorCode status(*this, "testBasic");
    ConstrainedFieldPosition cfpos;
    assertEquals("constraint", UCFPOS_CONSTRAINT_NONE, cfpos.getConstraintType());
    assertEquals("category", UFIELD_CATEGORY_UNDEFINED, cfpos.getCategory());
    assertEquals("field", 0, cfpos.getField());
    assertEquals("start", 0, cfpos.getStart());
    assertEquals("limit", 0, cfpos.getLimit());
    assertEquals("context", 0LL, cfpos.getInt64IterationContext());
}


extern IntlTest *createFormattedValueTest() {
    return new FormattedValueTest();
}

#endif /* !UCONFIG_NO_FORMATTING */
