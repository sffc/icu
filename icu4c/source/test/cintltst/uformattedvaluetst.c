// © 2018 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html

#include "unicode/utypes.h"

#if !UCONFIG_NO_FORMATTING

// Allow implicit conversion from char16_t* to UnicodeString for this file:
// Helpful in toString methods and elsewhere.
#define UNISTR_FROM_STRING_EXPLICIT

#include "unicode/uformattedvalue.h"
#include "cintltst.h"
#include "cmemory.h"

static void TestBasic(void);

void addUFormattedValueTest(TestNode** root);

#define TESTCASE(x) addTest(root, &x, "tsformat/uformattedvalue/" #x)

void addUFormattedValueTest(TestNode** root) {
    TESTCASE(TestBasic);
}


static void TestBasic() {
    UErrorCode status = U_ZERO_ERROR;
    UConstrainedFieldPosition* ucfpos = ucfpos_open(&status);
    assertSuccess("opening ucfpos", &status);
    assertTrue("ucfpos should not be null", ucfpos != NULL);

    UCFPosConstraintType constraintType = ucfpos_getConstraintType(ucfpos, &status);
    assertSuccess("constraint", &status);
    assertIntEquals("constraint", UCFPOS_CONSTRAINT_NONE, constraintType);

    UFieldCategory category = ucfpos_getCategory(ucfpos, &status);
    assertSuccess("category", &status);
    assertIntEquals("category", UFIELD_CATEGORY_UNDEFINED, category);

    int32_t field = ucfpos_getField(ucfpos, &status);
    assertSuccess("field", &status);
    assertIntEquals("field", 0, field);

    int32_t start, limit;
    ucfpos_getIndexes(ucfpos, &start, &limit, &status);
    assertSuccess("indexes", &status);
    assertIntEquals("start", 0, start);
    assertIntEquals("limit", 0, limit);

    int64_t context = ucfpos_getInt64IterationContext(ucfpos, &status);
    assertSuccess("context", &status);
    assertIntEquals("context", 0LL, context);

    ucfpos_close(ucfpos);
}


#endif /* #if !UCONFIG_NO_FORMATTING */
