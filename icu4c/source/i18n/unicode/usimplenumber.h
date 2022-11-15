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


typedef enum USimpleNumberSign {
    UNUM_SIMPLE_NUMBER_PLUS_SIGN,
    UNUM_SIMPLE_NUMBER_NO_SIGN,
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


U_CAPI USimpleNumber* U_EXPORT2
usnumf_openNumberForInt(int64_t value, UErrorCode* ec);


U_CAPI void U_EXPORT2
usnumf_multiplyByPowerOfTen(USimpleNumber* unumber, int32_t power, UErrorCode* ec);


U_CAPI void U_EXPORT2
usnumf_roundTo(USimpleNumber* unumber, int32_t position, UNumberFormatRoundingMode roundingMode, UErrorCode* ec);


U_CAPI void U_EXPORT2
usnumf_padStart(USimpleNumber* unumber, int32_t position, UErrorCode* ec);


U_CAPI void U_EXPORT2
usnumf_padEnd(USimpleNumber* unumber, int32_t position, UErrorCode* ec);


U_CAPI void U_EXPORT2
usnumf_truncateStart(USimpleNumber* unumber, int32_t position, UErrorCode* ec);


U_CAPI void U_EXPORT2
usnumf_setSign(USimpleNumber* unumber, USimpleNumberSign sign, UErrorCode* ec);


U_CAPI USimpleNumberFormatter* U_EXPORT2
usnumf_openForLocale(const char* locale, UErrorCode* ec);


U_CAPI USimpleNumberFormatter* U_EXPORT2
usnumf_openForLocaleAndGroupingStrategy(
       const char* locale, UNumberGroupingStrategy groupingStrategy, UErrorCode* ec);


U_CAPI void U_EXPORT2
usnumf_formatAndAdoptNumber(
    const USimpleNumberFormatter* uformatter,
    USimpleNumber* unumber,
    int64_t value,
    UFormattedNumber* uresult,
    UErrorCode* ec);


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

#endif /* #if !UCONFIG_NO_FORMATTING */
#endif //__USIMPLENUMBER_H__
