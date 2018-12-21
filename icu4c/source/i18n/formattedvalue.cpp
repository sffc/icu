// © 2018 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html

#include "unicode/utypes.h"

#if !UCONFIG_NO_FORMATTING

// Allow implicit conversion from char16_t* to UnicodeString for this file:
// Helpful in toString methods and elsewhere.
#define UNISTR_FROM_STRING_EXPLICIT

#include "unicode/formattedvalue.h"

U_NAMESPACE_BEGIN


ConstrainedFieldPosition::ConstrainedFieldPosition() {}

ConstrainedFieldPosition::~ConstrainedFieldPosition() {}


U_NAMESPACE_END

#endif /* #if !UCONFIG_NO_FORMATTING */
