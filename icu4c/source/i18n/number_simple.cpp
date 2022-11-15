// © 2017 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html

#include "unicode/utypes.h"

#if !UCONFIG_NO_FORMATTING

#include "unicode/numberformatter.h"
#include "unicode/simplenumber.h"
#include "number_formatimpl.h"
#include "number_utils.h"
#include "number_patternmodifier.h"
#include "number_utypes.h"

using namespace icu;
using namespace icu::number;
using namespace icu::number::impl;


SimpleNumber
SimpleNumber::forInteger(int64_t value, UErrorCode& status) {
    if (U_FAILURE(status)) {
        return SimpleNumber();
    }
    auto results = new UFormattedNumberData();
    if (results == nullptr) {
        status = U_MEMORY_ALLOCATION_ERROR;
        return SimpleNumber();
    }
    results->quantity.setToLong(value);
    return SimpleNumber(results, status);
}

SimpleNumber::SimpleNumber(UFormattedNumberData* quantity, UErrorCode& status)
    : fData(quantity, status)
{
    if (U_FAILURE(status)) {
        return;
    }
    if (fData->quantity.isNegative()) {
        fSign = UNUM_SIMPLE_NUMBER_MINUS_SIGN;
    } else {
        fSign = UNUM_SIMPLE_NUMBER_PLUS_SIGN;
    }
}

void SimpleNumber::multiplyByPowerOfTen(int32_t power) {
    if (fData.isNull()) {
        return;
    }
    fData->quantity.adjustMagnitude(power);
}

void SimpleNumber::roundTo(int32_t position, UNumberFormatRoundingMode roundingMode) {
    if (fData.isNull()) {
        return;
    }
    if (roundingMode == UNUM_ROUND_UNNECESSARY) {
        return;
    }
    // The only error that can occur is the one for UNUM_ROUND_UNNECESSARY, so we can ignore it
    icu::ErrorCode localStatus;
    fData->quantity.roundToMagnitude(position, roundingMode, localStatus);
}

void SimpleNumber::padStart(int32_t position) {
    if (fData.isNull()) {
        return;
    }
    fData->quantity.setMinInteger(position);
}

void SimpleNumber::padEnd(int32_t position) {
    if (fData.isNull()) {
        return;
    }
    fData->quantity.setMinFraction(position);
}

void SimpleNumber::truncateStart(int32_t position) {
    if (fData.isNull()) {
        return;
    }
    fData->quantity.applyMaxInteger(position);
}

void SimpleNumber::setSign(USimpleNumberSign sign) {
    fSign = sign;
}


SimpleNumberFormatter::~SimpleNumberFormatter() {
    delete fMicros;
    delete fPatternModifier;
}

SimpleNumberFormatter SimpleNumberFormatter::forLocale(const icu::Locale &locale, UErrorCode &status) {
    return SimpleNumberFormatter::forLocaleAndGroupingStrategy(locale, UNUM_GROUPING_AUTO, status);
}

SimpleNumberFormatter SimpleNumberFormatter::forLocaleAndGroupingStrategy(
    const icu::Locale &locale, UNumberGroupingStrategy groupingStrategy, UErrorCode &status) {
    SimpleNumberFormatter retval;
    retval.fOwnedSymbols = { new DecimalFormatSymbols(locale, status), status };
    retval.fSymbols = retval.fOwnedSymbols.getAlias();
    retval.fMicros = new SimpleMicroProps();
    if (retval.fMicros == nullptr) {
        status = U_MEMORY_ALLOCATION_ERROR;
        return retval;
    }
    retval.fMicros->symbols = retval.fSymbols;

    // TODO: Select the correct nsName
    auto pattern = utils::getPatternForStyle(locale, "latn", CLDR_PATTERN_STYLE_DECIMAL, status);
    if (U_FAILURE(status)) {
        return retval;
    }

    ParsedPatternInfo patternInfo;
    PatternParser::parseToPatternInfo(UnicodeString(pattern), patternInfo, status);
    if (U_FAILURE(status)) {
        return retval;
    }

    auto grouper = Grouper::forStrategy(groupingStrategy);
    grouper.setLocaleData(patternInfo, locale);
    retval.fMicros->grouping = grouper;

    MutablePatternModifier patternModifier(false);
    patternModifier.setPatternInfo(&patternInfo, kUndefinedField);
    // TODO: Select a variable UNumberSignDisplay
    patternModifier.setPatternAttributes(UNUM_SIGN_AUTO, false, false);
    patternModifier.setSymbols(retval.fSymbols, {}, UNUM_UNIT_WIDTH_SHORT, nullptr, status);

    retval.fPatternModifier = new AdoptingSignumModifierStore(patternModifier.createImmutableForPlural(StandardPlural::COUNT, status));

    retval.fGroupingStrategy = groupingStrategy;
    return retval;
}

FormattedNumber SimpleNumberFormatter::format(SimpleNumber value, UErrorCode &status) const {
    if (U_FAILURE(status) || value.fData.isNull()) {
        return FormattedNumber(U_ILLEGAL_ARGUMENT_ERROR);
    }

    formatImpl(value.fData.getAlias(), status);

    // Do not save the results object if we encountered a failure.
    if (U_SUCCESS(status)) {
        return FormattedNumber(value.fData.orphan());
    } else {
        return FormattedNumber(status);
    }
}

void SimpleNumberFormatter::formatImpl(UFormattedNumberData *results, UErrorCode &status) const {
    const Modifier* modifier = (*fPatternModifier)[results->quantity.signum()];
    auto length = NumberFormatterImpl::writeNumber(*fMicros, results->quantity, results->getStringRef(), 0, status);
    length += modifier->apply(results->getStringRef(), 0, length, status);
    results->getStringRef().writeTerminator(status);
}

#endif /* #if !UCONFIG_NO_FORMATTING */
