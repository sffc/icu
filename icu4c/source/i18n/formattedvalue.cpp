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

void ConstrainedFieldPosition::constrainCategory(UFieldCategory category) {
    fConstraint = UCFPOS_CONSTRAINT_CATEGORY;
    fCategory = category;
}

void ConstrainedFieldPosition::constrainField(UFieldCategory category, int32_t field) {
    fConstraint = UCFPOS_CONSTRAINT_FIELD;
    fCategory = category;
    fField = field;
}

void ConstrainedFieldPosition::setInt64IterationContext(int64_t context) {
    fContext = context;
}

void ConstrainedFieldPosition::setState(
        UFieldCategory category,
        int32_t field,
        int32_t start,
        int32_t limit) {
    fCategory = category;
    fField = field;
    fStart = start;
    fLimit = limit;
}


FormattedValue::~FormattedValue() = default;


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
ucfpos_constrainCategory(UConstrainedFieldPosition* ptr, UFieldCategory category, UErrorCode* ec) {
    auto* impl = UConstrainedFieldPositionImpl::validate(ptr, *ec);
    if (U_FAILURE(*ec)) {
        return;
    }
    impl->fImpl.constrainCategory(category);
}

U_CAPI void U_EXPORT2
ucfpos_constrainField(UConstrainedFieldPosition* ptr, UFieldCategory category, int32_t field, UErrorCode* ec) {
    auto* impl = UConstrainedFieldPositionImpl::validate(ptr, *ec);
    if (U_FAILURE(*ec)) {
        return;
    }
    impl->fImpl.constrainField(category, field);
}

U_CAPI UCFPosConstraintType U_EXPORT2
ucfpos_getConstraintType(const UConstrainedFieldPosition* ptr, UErrorCode* ec) {
    const auto* impl = UConstrainedFieldPositionImpl::validate(ptr, *ec);
    if (U_FAILURE(*ec)) {
        return UCFPOS_CONSTRAINT_NONE;
    }
    return impl->fImpl.getConstraintType();
}

U_CAPI UFieldCategory U_EXPORT2
ucfpos_getCategory(const UConstrainedFieldPosition* ptr, UErrorCode* ec) {
    const auto* impl = UConstrainedFieldPositionImpl::validate(ptr, *ec);
    if (U_FAILURE(*ec)) {
        return UFIELD_CATEGORY_UNDEFINED;
    }
    return impl->fImpl.getCategory();
}

U_CAPI int32_t U_EXPORT2
ucfpos_getField(const UConstrainedFieldPosition* ptr, UErrorCode* ec) {
    const auto* impl = UConstrainedFieldPositionImpl::validate(ptr, *ec);
    if (U_FAILURE(*ec)) {
        return 0;
    }
    return impl->fImpl.getField();
}

U_CAPI void U_EXPORT2
ucfpos_getIndexes(const UConstrainedFieldPosition* ptr, int32_t* pStart, int32_t* pLimit, UErrorCode* ec) {
    const auto* impl = UConstrainedFieldPositionImpl::validate(ptr, *ec);
    if (U_FAILURE(*ec)) {
        return;
    }
    *pStart = impl->fImpl.getStart();
    *pLimit = impl->fImpl.getLimit();
}

U_CAPI int64_t U_EXPORT2
ucfpos_getInt64IterationContext(const UConstrainedFieldPosition* ptr, UErrorCode* ec) {
    const auto* impl = UConstrainedFieldPositionImpl::validate(ptr, *ec);
    if (U_FAILURE(*ec)) {
        return 0;
    }
    return impl->fImpl.getInt64IterationContext();
}

U_CAPI void U_EXPORT2
ucfpos_setInt64IterationContext(UConstrainedFieldPosition* ptr, int64_t context, UErrorCode* ec) {
    auto* impl = UConstrainedFieldPositionImpl::validate(ptr, *ec);
    if (U_FAILURE(*ec)) {
        return;
    }
    impl->fImpl.setInt64IterationContext(context);
}

U_CAPI void U_EXPORT2
ucfpos_setState(
        UConstrainedFieldPosition* ptr,
        UFieldCategory category,
        int32_t field,
        int32_t start,
        int32_t limit,
        UErrorCode* ec) {
    auto* impl = UConstrainedFieldPositionImpl::validate(ptr, *ec);
    if (U_FAILURE(*ec)) {
        return;
    }
    impl->fImpl.setState(category, field, start, limit);
}

U_CAPI void U_EXPORT2
ucfpos_close(UConstrainedFieldPosition* ptr) {
    UErrorCode localStatus = U_ZERO_ERROR;
    auto* impl = UConstrainedFieldPositionImpl::validate(ptr, localStatus);
    delete impl;
}


U_NAMESPACE_END

#endif /* #if !UCONFIG_NO_FORMATTING */
