// © 2017 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html

#include "unicode/utypes.h"

#if !UCONFIG_NO_FORMATTING

#include "unicode/numberformatter.h"
#include "number_formatimpl.h"
#include "number_utils.h"
#include "number_patternmodifier.h"

using namespace icu;
using namespace icu::number;
using namespace icu::number::impl;

SimpleNumberFormatter SimpleNumberFormatter::forLocaleAndGroupingStrategy(
    const icu::Locale &locale, UNumberGroupingStrategy groupingStrategy, UErrorCode &status) {
    SimpleNumberFormatter retval;
    retval.fSymbols = { new DecimalFormatSymbols(locale, status), status };
    retval.fMicros = new SimpleMicroProps();
    if (retval.fMicros == nullptr) {
        status = U_MEMORY_ALLOCATION_ERROR;
        return retval;
    }

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
    patternModifier.setSymbols(retval.fSymbols.getAlias(), {}, UNUM_UNIT_WIDTH_SHORT, nullptr, status);

    retval.fMicros->modMiddle = patternModifier.createImmutable(status);

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

void SimpleNumberFormatter::formatImpl(UFormattedNumberData *results, UErrorCode &status) const {
}

#endif /* #if !UCONFIG_NO_FORMATTING */
