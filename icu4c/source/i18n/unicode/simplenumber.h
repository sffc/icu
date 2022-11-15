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

class U_I18N_API SimpleNumberFormatter : public UMemory {
  public:
    static SimpleNumberFormatter forLocale(const icu::Locale &locale, UErrorCode &status);
    static SimpleNumberFormatter forLocaleAndGroupingStrategy(const icu::Locale &locale,
                                                              UNumberGroupingStrategy groupingStrategy,
                                                              UErrorCode &status);
    static SimpleNumberFormatter
    forSymbolsAndGroupingStrategy(LocalPointer<DecimalFormatSymbols> symbols,
                                  UNumberGroupingStrategy groupingStrategy, UErrorCode &status);

    FormattedNumber formatInt(int64_t value, UErrorCode &status) const;

    FormattedNumber formatInt(int64_t value, SimpleNumberFormatterOptionsV1 options, UErrorCode &status) const;

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
    UNumberGroupingStrategy fGroupingStrategy = UNUM_GROUPING_AUTO;
    LocalPointer<DecimalFormatSymbols> fOwnedSymbols;

    // NOT Owned:
    const DecimalFormatSymbols* fSymbols = nullptr;

    // Owned:
    impl::SimpleMicroProps* fMicros = nullptr;
    impl::AdoptingSignumModifierStore* fPatternModifier = nullptr;

    void formatImpl(impl::UFormattedNumberData *results, UErrorCode &status) const;
};


}  // namespace number
U_NAMESPACE_END

#endif /* #if !UCONFIG_NO_FORMATTING */

#endif /* U_SHOW_CPLUSPLUS_API */

#endif // __SIMPLENUMBERH__

