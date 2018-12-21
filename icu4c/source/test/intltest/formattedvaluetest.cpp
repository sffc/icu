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
}


extern IntlTest *createFormattedValueTest() {
    return new FormattedValueTest();
}

#endif /* !UCONFIG_NO_FORMATTING */
