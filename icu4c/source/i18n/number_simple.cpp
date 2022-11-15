// © 2017 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html

#include "unicode/utypes.h"

#if !UCONFIG_NO_FORMATTING

#include "unicode/numberformatter.h"
#include "unicode/simplenumber.h"
#include "number_formatimpl.h"
#include "number_utils.h"
#include "number_patternmodifier.h"

using namespace icu;
using namespace icu::number;
using namespace icu::number::impl;


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

FormattedNumber SimpleNumberFormatter::formatInt(int64_t value, UErrorCode &status) const {
    if (U_FAILURE(status)) { return FormattedNumber(U_ILLEGAL_ARGUMENT_ERROR); }
    auto results = new UFormattedNumberData();
    if (results == nullptr) {
        status = U_MEMORY_ALLOCATION_ERROR;
        return FormattedNumber(status);
    }
    results->quantity.setToLong(value);

    formatImpl(results, status);

    // Do not save the results object if we encountered a failure.
    if (U_SUCCESS(status)) {
        return FormattedNumber(results);
    } else {
        delete results;
        return FormattedNumber(status);
    }
}

FormattedNumber SimpleNumberFormatter::formatInt(int64_t value, SimpleNumberFormatterOptionsV1 options, UErrorCode &status) const {
    if (U_FAILURE(status)) { return FormattedNumber(U_ILLEGAL_ARGUMENT_ERROR); }
    auto results = new UFormattedNumberData();
    if (results == nullptr) {
        status = U_MEMORY_ALLOCATION_ERROR;
        return FormattedNumber(status);
    }
    results->quantity.setToLong(value);

    results->quantity.adjustMagnitude(options.scale);

    formatImpl(results, status);

    // Do not save the results object if we encountered a failure.
    if (U_SUCCESS(status)) {
        return FormattedNumber(results);
    } else {
        delete results;
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
