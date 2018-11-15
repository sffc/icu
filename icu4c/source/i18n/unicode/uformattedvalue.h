// © 2018 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html

#ifndef __UFORMATTEDVALUE_H__
#define __UFORMATTEDVALUE_H__

#include "unicode/utypes.h"

#if !UCONFIG_NO_FORMATTING

#include "unicode/ufieldpositer.h"


/**
 * All possible field categories in ICU. Every entry in this enum corresponds
 * to another enum that exists in ICU.
 *
 * @draft ICU 64
 */
typedef enum UFieldCategory {
    /**
     * For an undefined field category.
     * 
     * @draft ICU 64
     */
    UFIELDCATEGORY_UNDEFINED = 0,

    /**
     * For fields in UCalendarDateFields (ucal.h), from ICU 2.0.
     *
     * @draft ICU 64
     */
    UFIELDCATEGORY_CALENDAR_DATE,

    /**
     * For fields in UDateFormatField (udat.h), from ICU 3.0.
     *
     * @draft ICU 64
     */
    UFIELDCATEGORY_DATE_FORMAT,

    /**
     * For fields in UDateTimePatternField (udatpg.h), from ICU 3.8.
     *
     * @draft ICU 64
     */
    UFIELDCATEGORY_DATE_TIME_PATTERN,

    /**
     * For fields in UNumberFormatFields (unum.h), from ICU 49.
     *
     * @draft ICU 64
     */
    UFIELDCATEGORY_NUMBER_FORMAT,

    /**
     * For fields in UListFormatterField (ulistformatter.h), from ICU 63.
     *
     * @draft ICU 64
     */
    UFIELDCATEGORY_LIST_FORMATTER,

} UFieldCategory;


struct UFormattedValue;
/**
 * An abstract formatted value: a string with associated field attributes.
 * Many formatters format to types compatible with UFormattedValue.
 *
 * @draft ICU 64
 */
typedef struct UFormattedValue UFormattedValue;


/**
 * Extracts the string out of a UFormattedValue to a UChar buffer if possible.
 * If bufferCapacity is greater than the required length, a terminating NUL is written.
 * If bufferCapacity is less than the required length, an error code is set.
 *
 * @param ufmtval
 *         The object containing the formatted string and attributes.
 * @param buffer
 *         Where to save the string output.
 * @param bufferCapacity
 *         The number of UChars available in the buffer.
 * @param ec Set if an error occurs.
 * @return The required length.
 *
 * @draft ICU 64
 */
U_DRAFT int32_t U_EXPORT2
ufmtval_getString(
    const UFormattedValue* ufmtval,
    UChar* buffer,
    int32_t bufferCapacity,
    UErrorCode* ec);


/**
 * Returns a pointer to the formatted string. The pointer is owned by the UFormattedValue. The
 * return value is valid only as long as the UFormattedValue is present and unchanged in memory.
 *
 * @param ufmtval
 *         The object containing the formatted string and attributes.
 * @param ec Set if an error occurs.
 * @return A pointer owned by the UFormattedValue.
 *
 * @draft ICU 64
 */
U_DRAFT const UChar* U_EXPORT2
ufmtval_getTempString(
    const UFormattedValue* ufmtval,
    UErrorCode* ec);


/**
 * Returns the length of the formatted string.
 *
 * @param ufmtval
 *         The object containing the formatted string and attributes.
 * @param ec Set if an error occurs.
 * @return The length of the string returned by ufmtval_getTempString
 *         or extracted by ufmtval_getString.
 *
 * @draft ICU 64
 */
U_DRAFT int32_t U_EXPORT2
ufmtval_getStringLength(
    const UFormattedValue* ufmtval,
    UErrorCode* ec);


/**
 * Loops over all field categories present in this FormattedValue in ascending order.
 * Often, for individual formatters, there will be only one field category.
 *
 * You can start your search at UFIELDCATEGORY_UNDEFINED. Example:
 *
 *     UFieldCategory fieldCategory = UFIELDCATEGORY_UNDEFINED;
 *     while (ufmtval_nextFieldCategory(fmtval, &fieldCategory, &ec)) {
 *         // fieldCategory is set to one of the present categories.
 *     }
 *
 * @param ufmtval
 *         The object containing the formatted string and attributes.
 * @param outCategory
 *         Output variable for the current category. Set if the return value is TRUE.
 * @param ec Set if an error occurs.
 * @return TRUE if another field category was successfully found;
 *         FALSE otherwise or if an error was set.
 *
 * @draft ICU 64
 */
U_DRAFT UBool U_EXPORT2
ufmtval_nextFieldCategory(
    const UFormattedValue* ufmtval,
    UFieldCategory* outCategory,
    UErrorCode* ec);


// U_DRAFT UBool U_EXPORT2
// ufmtval_nextValueForCategory(
//     const UFormattedValue* ufmtval,
//     UFieldCategory category,
//     int32_t* outFieldValue,
//     UErrorCode* ec);


/**
 * Determines the start (inclusive) and end (exclusive) indices of the next occurrence of the given
 * field category and field value in the formatted string.
 *
 * For example, to loop over all instances of a UDAT_YEAR_FIELD:
 *
 *     int32_t startIndex = 0, endIndex = 0;
 *     while (ufmtval_nextPositionForCategoryAndValue(
 *             fmtval,
 *             UFIELDCATEGORY_CALENDAR_DATE,
 *             UDAT_YEAR_FIELD,
 *             &startIndex,
 *             &endIndex,
 *             &ec)) {
 *         // startIndex and endIndex are set to a position of the desired field.
 *     }
 *
 * This function iterates over field positions first by start index and then, within a common
 * start index, by increasing end index.
 *
 * If you need all positions for a category, use ufmtval_getAllPositionsForFieldCategory.
 *
 * @param ufmtval
 *         The object containing the formatted string and attributes.
 * @param category
 *         The category of the desired field.
 * @param fieldValue
 *         The value of the desired field.
 * @param startIndex Inclusive start index.
 *         On input: the first code unit index of the previous position.
 *         On output: the first code unit index of the next position.
 * @param endIndex Exclusive end index.
 *         On input: the code unit index following the previous position.
 *         On output: the code unit index following the next position.
 * @param ec Set if an error occurs.
 * @return TRUE if a new occurrence of the field was found;
 *         FALSE otherwise or if an error was set.
 *
 * @draft ICU 64
 */
U_DRAFT UBool U_EXPORT2
ufmtval_nextPositionForFieldCategoryAndValue(
    const UFormattedValue* ufmtval,
    UFieldCategory category,
    int32_t fieldValue,
    int32_t* startIndex,
    int32_t* endIndex,
    UErrorCode* ec);


/**
 * Populates an iterator for looping over all positions for a given field category.
 *
 * If you need positions for only one field, use ufmtval_nextPositionForFieldCategoryAndValue.
 *
 * @param ufmtval
 *         The object containing the formatted string and attributes.
 * @param category
 *         The desired category of fields.
 * @param ufpositer
 *         A pointer to a UFieldPositionIterator created by {@link #ufieldpositer_open}. Iteration
 *         information already present in the UFieldPositionIterator is deleted, and the iterator is
 *         reset to apply to the fields in the FormattedValue having the given category.
 * @param outLength The length of the position.
 * @param ec Set if an error occurs.
 * @return TRUE if another field position was successfully found;
 *         FALSE otherwise or if an error was set.
 * @draft ICU 64
 */
U_DRAFT UBool U_EXPORT2
ufmtval_getAllPositionsForFieldCategory(
    const UFormattedValue* ufmtval,
    UFieldCategory category,
    UFieldPositionIterator* ufpositer,
    UErrorCode* ec);



#endif /* #if !UCONFIG_NO_FORMATTING */
#endif // __UFORMATTEDVALUE_H__
