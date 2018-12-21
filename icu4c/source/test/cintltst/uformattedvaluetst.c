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
}


#endif /* #if !UCONFIG_NO_FORMATTING */
