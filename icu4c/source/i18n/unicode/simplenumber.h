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


/**
 * An input type for SimpleNumberFormatter.
 * @draft ICU 73
 */
class U_I18N_API SimpleNumber : public UMemory {
  public:
    /**
     * Creates a SimpleNumber for an integer.
     * @draft ICU 73
     */
    static SimpleNumber forInteger(int64_t value, UErrorCode& status);

    /**
     * Changes the value of the SimpleNumber by a power of 10.
     * @draft ICU 73
     */
    void multiplyByPowerOfTen(int32_t power);

    /**
     * Rounds the value currently stored in the SimpleNumber to the given power of 10.
     * @draft ICU 73
     */
    void roundTo(int32_t position, UNumberFormatRoundingMode roundingMode);

    /**
     * Pads the beginning of the number with zeros up to the given minimum number of integer digits.
     * @draft ICU 73
     */
    void padStart(uint32_t minimumIntegerDigits);

    /**
     * Pads the end of the number with zeros up to the given minimum number of fraction digits.
     * @draft ICU 73
     */
    void padEnd(uint32_t minimumFractionDigits);

    /**
     * Truncates digits from the beginning of the number to the given maximum number of integer digits.
     * @draft ICU 73
     */
    void truncateStart(uint32_t maximumIntegerDigits);

    /**
     * Sets the sign of the number: an explicit plus sign, explicit minus sign, or no sign.
     * @draft ICU 73
     */
    void setSign(USimpleNumberSign sign);

    /**
     * Destruct this SimpleNumber, cleaning up any memory it might own.
     * @draft ICU 73
     */
    ~SimpleNumber();

    /**
     * SimpleNumber move constructor.
     * @draft ICU 73
     */
    SimpleNumber(SimpleNumber&& other) U_NOEXCEPT {
      fData = other.fData;
      fSign = other.fSign;
      other.fData = nullptr;
    }

    /**
     * SimpleNumber move assignment.
     * @draft ICU 73
     */
    SimpleNumber& operator=(SimpleNumber&& other) U_NOEXCEPT {
      fData = other.fData;
      fSign = other.fSign;
      other.fData = nullptr;
      return *this;
    }

  private:
    SimpleNumber() = default;
    SimpleNumber(impl::UFormattedNumberData* data, UErrorCode& status);
    SimpleNumber(const SimpleNumber&) = delete;
    SimpleNumber& operator=(const SimpleNumber&) = delete;

    impl::UFormattedNumberData* fData = nullptr;
    USimpleNumberSign fSign = UNUM_SIMPLE_NUMBER_NO_SIGN;

    friend class SimpleNumberFormatter;
};


/**
 * A special NumberFormatter focused on smaller binary size and memory use.
 * 
 * SimpleNumberFormatter is capable of basic number formatting, including grouping separators,
 * sign display, and rounding. It is not capable of currencies, compact notation, or units.
 */
class U_I18N_API SimpleNumberFormatter : public UMemory {
  public:
    /**
     * Creates a new SimpleNumberFormatter with all locale defaults.
     */
    static SimpleNumberFormatter forLocale(
        const icu::Locale &locale,
        UErrorCode &status);

    /**
     * Creates a new SimpleNumberFormatter, overriding the grouping strategy.
     */
    static SimpleNumberFormatter forLocaleAndGroupingStrategy(
        const icu::Locale &locale,
        UNumberGroupingStrategy groupingStrategy,
        UErrorCode &status);

    /**
     * Creates a new SimpleNumberFormatter, overriding the grouping strategy and symbols.
     *
     * IMPORTANT: For efficiency, this function borrows the symbols. The symbols MUST remain valid
     * for the lifetime of the SimpleNumberFormatter.
     */
    static SimpleNumberFormatter forLocaleAndSymbolsAndGroupingStrategy(
        const icu::Locale &locale,
        const DecimalFormatSymbols *symbols,
        UNumberGroupingStrategy groupingStrategy,
        UErrorCode &status);

    /**
     * Formats a value using this SimpleNumberFormatter.
     */
    FormattedNumber format(SimpleNumber value, UErrorCode &status) const;

    /**
     * Destruct this SimpleNumberFormatter, cleaning up any memory it might own.
     * @draft ICU 73
     */
    ~SimpleNumberFormatter();

    SimpleNumberFormatter() = default;

    // TODO: Make sure these move constructors are well tested
    SimpleNumberFormatter(SimpleNumberFormatter&&) U_NOEXCEPT = default;
    SimpleNumberFormatter& operator=(SimpleNumberFormatter&&) U_NOEXCEPT = default;

  private:
    void initialize(
        const icu::Locale &locale,
        const DecimalFormatSymbols *symbols,
        UNumberGroupingStrategy groupingStrategy,
        UErrorCode &status);

    SimpleNumberFormatter(const SimpleNumberFormatter&) = delete;

    SimpleNumberFormatter& operator=(const SimpleNumberFormatter&) = delete;

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

