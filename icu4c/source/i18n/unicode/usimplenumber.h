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


struct USimpleNumberFormatter;
/**
 * C-compatible version of icu::number::SimpleNumberFormatter.
 *
 * NOTE: This is a C-compatible API; C++ users should build against numberformatter.h instead.
 *
 * @draft ICU 73
 */
typedef struct USimpleNumberFormatter USimpleNumberFormatter;


U_CAPI USimpleNumberFormatter* U_EXPORT2
usnumf_openForLocaleAndGroupingStrategy(
       const char* locale, UNumberGroupingStrategy groupingStrategy, UErrorCode* ec);


U_CAPI void U_EXPORT2
usnumf_formatInt(const USimpleNumberFormatter* uformatter, int64_t value, UFormattedNumber* uresult,
                UErrorCode* ec);

// U_CAPI void U_EXPORT2
// usnumf_formatDouble(const USimpleNumberFormatter* uformatter, double value, UFormattedNumber* uresult,
//                    UErrorCode* ec);

// U_CAPI void U_EXPORT2
// usnumf_formatDecimal(const USimpleNumberFormatter* uformatter, const char* value, int32_t valueLen,
//                     UFormattedNumber* uresult, UErrorCode* ec);


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
 * LocalUSimpleNumberFormatter uformatter(unumf_openForSkeletonAndLocale(...));
 * // no need to explicitly call usnumf_close()
 * </pre>
 *
 * @see LocalPointerBase
 * @see LocalPointer
 * @stable ICU 62
 */
U_DEFINE_LOCAL_OPEN_POINTER(LocalUSimpleNumberFormatter, USimpleNumberFormatter, usnumf_close);

U_NAMESPACE_END
#endif // U_SHOW_CPLUSPLUS_API

#endif /* #if !UCONFIG_NO_FORMATTING */
#endif //__USIMPLENUMBER_H__
