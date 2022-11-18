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


// Export an explicit template instantiation of the LocalPointer that is used as a
// data member of SimpleNumberFormatter.
// (When building DLLs for Windows this is required.)
#if U_PF_WINDOWS <= U_PLATFORM && U_PLATFORM <= U_PF_CYGWIN
#if defined(_MSC_VER)
// Ignore warning 4661 as LocalPointerBase does not use operator== or operator!=
#pragma warning(push)
#pragma warning(disable : 4661)
#endif
/** Explicit template instantiation. */
template class U_I18N_API LocalPointerBase<DecimalFormatSymbols>;
/** Explicit template instantiation. */
template class U_I18N_API LocalPointer<DecimalFormatSymbols>;
#if defined(_MSC_VER)
#pragma warning(pop)
#endif
#endif


namespace number {  // icu::number

#ifndef U_HIDE_DRAFT_API


/**
 * An input type for SimpleNumberFormatter.
 *
 * @draft ICU 73
 */
class U_I18N_API SimpleNumber : public UMemory {
  public:
    /**
     * Creates a SimpleNumber for an integer.
     *
     * @draft ICU 73
     */
    static SimpleNumber forInteger(int64_t value, UErrorCode& status);

    /**
     * Changes the value of the SimpleNumber by a power of 10.
     *
     * This function immediately mutates the inner value.
     *
     * @draft ICU 73
     */
    void multiplyByPowerOfTen(int32_t power, UErrorCode& status);

    /**
     * Rounds the value currently stored in the SimpleNumber to the given power of 10.
     *
     * This function immediately mutates the inner value.
     *
     * @draft ICU 73
     */
    void roundTo(int32_t power, UNumberFormatRoundingMode roundingMode, UErrorCode& status);

    /**
     * Truncates digits from the beginning of the number to the given maximum number of integer digits.
     *
     * This function immediately mutates the inner value.
     *
     * @draft ICU 73
     */
    void truncateStart(uint32_t maximumIntegerDigits, UErrorCode& status);

    /**
     * Pads the beginning of the number with zeros up to the given minimum number of integer digits.
     *
     * This setting is applied upon formatting the number. 
     *
     * @draft ICU 73
     */
    void setMinimumIntegerDigits(uint32_t minimumIntegerDigits, UErrorCode& status);

    /**
     * Pads the end of the number with zeros up to the given minimum number of fraction digits.
     *
     * This setting is applied upon formatting the number.
     *
     * @draft ICU 73
     */
    void setMinimumFractionDigits(uint32_t minimumFractionDigits, UErrorCode& status);

    /**
     * Sets the sign of the number: an explicit plus sign, explicit minus sign, or no sign.
     *
     * This setting is applied upon formatting the number.
     *
     * @draft ICU 73
     */
    void setSign(USimpleNumberSign sign, UErrorCode& status);

    /**
     * Creates a new, empty SimpleNumber that does not contain a value.
     * 
     * NOTE: This number will fail to format; use forInteger to create a SimpleNumber with a value.
     *
     * @draft ICU 73
     */
    SimpleNumber() = default;

    /**
     * Destruct this SimpleNumber, cleaning up any memory it might own.
     *
     * @draft ICU 73
     */
    ~SimpleNumber() {
      cleanup();
    }

    /**
     * SimpleNumber move constructor.
     *
     * @draft ICU 73
     */
    SimpleNumber(SimpleNumber&& other) U_NOEXCEPT {
      fData = other.fData;
      fSign = other.fSign;
      other.fData = nullptr;
    }

    /**
     * SimpleNumber move assignment.
     *
     * @draft ICU 73
     */
    SimpleNumber& operator=(SimpleNumber&& other) U_NOEXCEPT {
      cleanup();
      fData = other.fData;
      fSign = other.fSign;
      other.fData = nullptr;
      return *this;
    }

  private:
    SimpleNumber(impl::UFormattedNumberData* data, UErrorCode& status);
    SimpleNumber(const SimpleNumber&) = delete;
    SimpleNumber& operator=(const SimpleNumber&) = delete;

    void cleanup();

    impl::UFormattedNumberData* fData = nullptr;
    USimpleNumberSign fSign = UNUM_SIMPLE_NUMBER_NO_SIGN;

    friend class SimpleNumberFormatter;
};


/**
 * A special NumberFormatter focused on smaller binary size and memory use.
 * 
 * SimpleNumberFormatter is capable of basic number formatting, including grouping separators,
 * sign display, and rounding. It is not capable of currencies, compact notation, or units.
 *
 * @draft ICU 73
 */
class U_I18N_API SimpleNumberFormatter : public UMemory {
  public:
    /**
     * Creates a new SimpleNumberFormatter with all locale defaults.
     *
     * @draft ICU 73
     */
    static SimpleNumberFormatter forLocale(
        const icu::Locale &locale,
        UErrorCode &status);

    /**
     * Creates a new SimpleNumberFormatter, overriding the grouping strategy.
     *
     * @draft ICU 73
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
     *
     * @draft ICU 73
     */
    static SimpleNumberFormatter forLocaleAndSymbolsAndGroupingStrategy(
        const icu::Locale &locale,
        const DecimalFormatSymbols *symbols,
        UNumberGroupingStrategy groupingStrategy,
        UErrorCode &status);

    /**
     * Formats a value using this SimpleNumberFormatter.
     *
     * @draft ICU 73
     */
    FormattedNumber format(SimpleNumber value, UErrorCode &status) const;

    /**
     * Formats an integer using this SimpleNumberFormatter.
     *
     * For more control over the formatting, use SimpleNumber.
     *
     * @draft ICU 73
     */
    FormattedNumber formatInteger(int64_t value, UErrorCode &status) const {
      return format(SimpleNumber::forInteger(value, status), status);
    }

#ifndef U_HIDE_INTERNAL_API
    /**
     * Run the formatter with the internal types.
     * @internal
     */
    void formatImpl(impl::UFormattedNumberData* data, USimpleNumberSign sign, UErrorCode& status) const;
#endif // U_HIDE_INTERNAL_API

    /**
     * Destruct this SimpleNumberFormatter, cleaning up any memory it might own.
     *
     * @draft ICU 73
     */
    ~SimpleNumberFormatter() {
      cleanup();
    }

    /**
     * Creates a shell, initialized but non-functional SimpleNumberFormatter.
     *
     * @draft ICU 73
     */
    SimpleNumberFormatter() = default;

    // FIXME: Make sure these move constructors are well tested

    /**
     * SimpleNumberFormatter: Move constructor.
     *
     * @draft ICU 73
     */
    SimpleNumberFormatter(SimpleNumberFormatter&& other) U_NOEXCEPT {
      fGroupingStrategy = other.fGroupingStrategy;
      fOwnedSymbols = std::move(other.fOwnedSymbols);
      fMicros = other.fMicros;
      fPatternModifier = other.fPatternModifier;
      other.fMicros = nullptr;
      other.fPatternModifier = nullptr;
    }

    /**
     * SimpleNumberFormatter: Move assignment.
     *
     * @draft ICU 73
     */
    SimpleNumberFormatter& operator=(SimpleNumberFormatter&& other) U_NOEXCEPT {
      cleanup();
      fGroupingStrategy = other.fGroupingStrategy;
      fOwnedSymbols = std::move(other.fOwnedSymbols);
      fMicros = other.fMicros;
      fPatternModifier = other.fPatternModifier;
      other.fMicros = nullptr;
      other.fPatternModifier = nullptr;
      return *this;
    }

  private:
    void initialize(
        const icu::Locale &locale,
        const DecimalFormatSymbols *symbols,
        UNumberGroupingStrategy groupingStrategy,
        UErrorCode &status);

    void cleanup();

    SimpleNumberFormatter(const SimpleNumberFormatter&) = delete;

    SimpleNumberFormatter& operator=(const SimpleNumberFormatter&) = delete;

    UNumberGroupingStrategy fGroupingStrategy = UNUM_GROUPING_AUTO;
    LocalPointer<DecimalFormatSymbols> fOwnedSymbols; // can be empty

    // Owned Pointers:
    impl::SimpleMicroProps* fMicros = nullptr;
    impl::AdoptingSignumModifierStore* fPatternModifier = nullptr;
};


#endif // U_HIDE_DRAFT_API

}  // namespace number
U_NAMESPACE_END

#endif /* #if !UCONFIG_NO_FORMATTING */

#endif /* U_SHOW_CPLUSPLUS_API */

#endif // __SIMPLENUMBERH__

