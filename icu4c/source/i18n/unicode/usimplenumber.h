// © 2022 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html

#ifndef __USIMPLENUMBER_H__
#define __USIMPLENUMBER_H__

#include "unicode/utypes.h"

#if !UCONFIG_NO_FORMATTING

#include "unicode/parseerr.h"
#include "unicode/ufieldpositer.h"
#include "unicode/umisc.h"
#include "unicode/uformattedvalue.h"
#include "unicode/unumberformatter.h"

// DISCUSS: UNumberFormatRoundingMode lives here
#include "unicode/unum.h"

#ifndef U_HIDE_DRAFT_API


/**
 * An explicit sign option for a SimpleNumber.
 *
 * @draft ICU 73
 */
typedef enum USimpleNumberSign {
    /**
     * Render a plus sign.
     *
     * @draft ICU 73
     */
    UNUM_SIMPLE_NUMBER_PLUS_SIGN,
    /**
     * Render no sign.
     *
     * @draft ICU 73
     */
    UNUM_SIMPLE_NUMBER_NO_SIGN,
    /**
     * Render a minus sign.
     *
     * @draft ICU 73
     */
    UNUM_SIMPLE_NUMBER_MINUS_SIGN,
} USimpleNumberSign;


struct USimpleNumber;
/**
 * C-compatible version of icu::number::SimpleNumber.
 *
 * @draft ICU 73
 */
typedef struct USimpleNumber USimpleNumber;


struct USimpleNumberFormatter;
/**
 * C-compatible version of icu::number::SimpleNumberFormatter.
 *
 * @draft ICU 73
 */
typedef struct USimpleNumberFormatter USimpleNumberFormatter;


/**
 * Creates a new USimpleNumber to be formatted with a USimpleNumberFormatter.
 *
 * @draft ICU 73
 */
U_CAPI USimpleNumber* U_EXPORT2
usnumf_openNumberForInt(int64_t value, UErrorCode* ec);


/**
 * Changes the value of the USimpleNumber by a power of 10.
 *
 * @draft ICU 73
 */
U_CAPI void U_EXPORT2
usnumf_multiplyByPowerOfTen(USimpleNumber* unumber, int32_t power, UErrorCode* ec);


/**
 * Rounds the value currently stored in the USimpleNumber to the given power of 10.
 *
 * @draft ICU 73
 */
U_CAPI void U_EXPORT2
usnumf_roundTo(USimpleNumber* unumber, int32_t position, UNumberFormatRoundingMode roundingMode, UErrorCode* ec);


/**
 * Pads the beginning of the number with zeros up to the given minimum number of integer digits.
 *
 * @draft ICU 73
 */
U_CAPI void U_EXPORT2
usnumf_setMinimumIntegerDigits(USimpleNumber* unumber, int32_t minimumIntegerDigits, UErrorCode* ec);


/**
 * Pads the end of the number with zeros up to the given minimum number of fraction digits.
 *
 * @draft ICU 73
 */
U_CAPI void U_EXPORT2
usnumf_setMinimumFractionDigits(USimpleNumber* unumber, int32_t minimumFractionDigits, UErrorCode* ec);


/**
 * Truncates digits from the beginning of the number to the given maximum number of integer digits.
 *
 * @draft ICU 73
 */
U_CAPI void U_EXPORT2
usnumf_truncateStart(USimpleNumber* unumber, int32_t maximumIntegerDigits, UErrorCode* ec);


/**
 * Sets the sign of the number: an explicit plus sign, explicit minus sign, or no sign.
 *
 * @draft ICU 73
 */
U_CAPI void U_EXPORT2
usnumf_setSign(USimpleNumber* unumber, USimpleNumberSign sign, UErrorCode* ec);


/**
 * Creates a new USimpleNumberFormatter with all locale defaults.
 *
 * @draft ICU 73
 */
U_CAPI USimpleNumberFormatter* U_EXPORT2
usnumf_openForLocale(const char* locale, UErrorCode* ec);


/**
 * Creates a new USimpleNumberFormatter, overriding the grouping strategy.
 *
 * @draft ICU 73
 */
U_CAPI USimpleNumberFormatter* U_EXPORT2
usnumf_openForLocaleAndGroupingStrategy(
       const char* locale, UNumberGroupingStrategy groupingStrategy, UErrorCode* ec);


/**
 * Creates a new USimpleNumberFormatter, overriding the grouping strategy and symbols.
 *
 * IMPORTANT: For efficiency, this function borrows the symbols. The symbols MUST remain valid
 * for the lifetime of the USimpleNumberFormatter.
 *
 * @draft ICU 73
 */
U_CAPI USimpleNumberFormatter* U_EXPORT2
usnumf_openForLocaleAndGroupingStrategy(
       const char* locale, UNumberGroupingStrategy groupingStrategy, UErrorCode* ec);


/**
 * Formats a number using this SimpleNumberFormatter.
 *
 * The USimpleNumber is adopted and should not be freed after calling this function,
 * even if the function sets an error code.
 *
 * @draft ICU 73
 */
U_CAPI void U_EXPORT2
usnumf_formatAndAdoptNumber(
    const USimpleNumberFormatter* uformatter,
    USimpleNumber* unumber,
    int64_t value,
    UFormattedNumber* uresult,
    UErrorCode* ec);


/**
 * Frees the memory held by a USimpleNumberFormatter.
 *
 * @draft ICU 73
 */
U_CAPI void U_EXPORT2
usnumf_close(USimpleNumberFormatter* uformatter);


#if U_SHOW_CPLUSPLUS_API
U_NAMESPACE_BEGIN

/**
 * \class LocalUSimpleNumberFormatter
 * "Smart pointer" class; closes a USimpleNumberFormatter via usnumf_close().
 * For most methods see the LocalPointerBase base class.
 *
 * Usage:
 * <pre>
 * LocalUSimpleNumberFormatter uformatter(usnumf_openForLocale(...));
 * // no need to explicitly call usnumf_close()
 * </pre>
 *
 * @see LocalPointerBase
 * @see LocalPointer
 * @draft ICU 73
 */
U_DEFINE_LOCAL_OPEN_POINTER(LocalUSimpleNumberFormatter, USimpleNumberFormatter, usnumf_close);

U_NAMESPACE_END
#endif // U_SHOW_CPLUSPLUS_API

#endif // U_HIDE_DRAFT_API

#endif /* #if !UCONFIG_NO_FORMATTING */
#endif //__USIMPLENUMBER_H__
