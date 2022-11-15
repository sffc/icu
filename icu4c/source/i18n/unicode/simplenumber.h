// © 2022 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html

#ifndef __SIMPLENUMBERH__
#define __SIMPLENUMBERH__

#include "unicode/utypes.h"

#if U_SHOW_CPLUSPLUS_API

#if !UCONFIG_NO_FORMATTING

#include "unicode/dcfmtsym.h"
#include "unicode/unumberformatter.h"
#include "unicode/usimplenumber.h"

// DISCUSS: I need this for FormattedNumber. Should I reverse the header deps?
#include "unicode/numberformatter.h"

U_NAMESPACE_BEGIN

namespace number {  // icu::number


// TODO: Make it C-compatible
struct SimpleNumberFormatterOptionsV1 {
    int32_t minimumFractionDigits = -1;
    int32_t maximumFractionDigits = -1;
    int32_t minimumIntegerDigits = -1;
    int32_t maximumIntegerDigits = -1;
    int32_t scale = 0;
};


class U_I18N_API SimpleNumber : public UMemory {
  public:
    /** Creates a SimpleNumber for an integer. */
    static SimpleNumber forInteger(int64_t value, UErrorCode& status);

    void multiplyByPowerOfTen(int32_t power);

    void roundTo(int32_t position, UNumberFormatRoundingMode roundingMode);

    void padStart(int32_t position);

    void padEnd(int32_t position);

    void truncateStart(int32_t position);

    void setSign(USimpleNumberSign sign);

  private:
    SimpleNumber() = default;
    SimpleNumber(impl::UFormattedNumberData* quantity, UErrorCode& status);

    LocalPointer<impl::UFormattedNumberData> fData;
    USimpleNumberSign fSign = UNUM_SIMPLE_NUMBER_NO_SIGN;

    friend class SimpleNumberFormatter;
};


class U_I18N_API SimpleNumberFormatter : public UMemory {
  public:
    static SimpleNumberFormatter forLocale(
        const icu::Locale &locale,
        UErrorCode &status);

    static SimpleNumberFormatter forLocaleAndGroupingStrategy(
        const icu::Locale &locale,
        UNumberGroupingStrategy groupingStrategy,
        UErrorCode &status);

    /**
     * NOTE: The DecimalFormatSymbols pointer must remain valid for the lifetime of the
     * SimpleNumberFormatter!
     */
    static SimpleNumberFormatter forLocaleAndSymbolsAndGroupingStrategy(
        const icu::Locale &locale,
        const DecimalFormatSymbols *symbols,
        UNumberGroupingStrategy groupingStrategy,
        UErrorCode &status);

    FormattedNumber format(SimpleNumber value, UErrorCode &status) const;

    /**
     * Destruct this SimpleNumberFormatter, cleaning up any memory it might own.
     * @draft ICU 73
     */
    ~SimpleNumberFormatter();

    SimpleNumberFormatter() = default;

    SimpleNumberFormatter(const SimpleNumberFormatter&) = delete;
    SimpleNumberFormatter(SimpleNumberFormatter&&) U_NOEXCEPT = default;

    SimpleNumberFormatter& operator=(const SimpleNumberFormatter&) = delete;
    SimpleNumberFormatter& operator=(SimpleNumberFormatter&&) U_NOEXCEPT = default;

  private:
    void initialize(
        const icu::Locale &locale,
        const DecimalFormatSymbols *symbols,
        UNumberGroupingStrategy groupingStrategy,
        UErrorCode &status);

    UNumberGroupingStrategy fGroupingStrategy = UNUM_GROUPING_AUTO;
    LocalPointer<DecimalFormatSymbols> fOwnedSymbols; // can be empty

    // Owned Pointers:
    impl::SimpleMicroProps* fMicros = nullptr;
    impl::AdoptingSignumModifierStore* fPatternModifier = nullptr;
};


}  // namespace number
U_NAMESPACE_END

#endif /* #if !UCONFIG_NO_FORMATTING */

#endif /* U_SHOW_CPLUSPLUS_API */

#endif // __SIMPLENUMBERH__

