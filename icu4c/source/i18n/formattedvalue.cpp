// © 2018 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html

#include "unicode/utypes.h"

#if !UCONFIG_NO_FORMATTING

// Allow implicit conversion from char16_t* to UnicodeString for this file:
// Helpful in toString methods and elsewhere.
#define UNISTR_FROM_STRING_EXPLICIT

#include "unicode/formattedvalue.h"
#include "capi_helper.h"

U_NAMESPACE_BEGIN


ConstrainedFieldPosition::ConstrainedFieldPosition() {}

ConstrainedFieldPosition::~ConstrainedFieldPosition() {}


///////////////////////
/// C API FUNCTIONS ///
///////////////////////

struct UConstrainedFieldPositionImpl : public UMemory,
        // Magic number as ASCII == "UCF"
        public IcuCApiHelper<UConstrainedFieldPosition, UConstrainedFieldPositionImpl, 0x55434600> {
    ConstrainedFieldPosition fImpl;
};

U_CAPI UConstrainedFieldPosition* U_EXPORT2
ucfpos_open(UErrorCode* ec) {
    auto* impl = new UConstrainedFieldPositionImpl();
    if (impl == nullptr) {
        *ec = U_MEMORY_ALLOCATION_ERROR;
        return nullptr;
    }
    return impl->exportForC();
}

U_CAPI void U_EXPORT2
ucfpos_close(UConstrainedFieldPosition* f) {
    UErrorCode localStatus = U_ZERO_ERROR;
    auto* impl = UConstrainedFieldPositionImpl::validate(f, localStatus);
    delete impl;
}


U_NAMESPACE_END

#endif /* #if !UCONFIG_NO_FORMATTING */
