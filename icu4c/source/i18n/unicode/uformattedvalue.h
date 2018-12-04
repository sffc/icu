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


struct UCategoryFieldPosition;
/**
 * Represents a span of a string containing a given field.
 * Similar to UFieldPosition.
 *
 * @draft ICU 64
 */
typedef struct UCategoryFieldPosition UCategoryFieldPosition;


/**
 * Creates a new UCategoryFieldPosition.
 *
 * By default, the UCategoryFieldPosition has no iteration constraints.
 *
 * @param ec Set if an error occurs.
 * @return The new object, or NULL if an error occurs.
 * @draft ICU 64
 */
U_DRAFT UCategoryFieldPosition* U_EXPORT2
ucfpos_open(UErrorCode* ec);


/**
 * Resets a UCategoryFieldPosition to its initial state, as if it were newly created.
 *
 * Removes any constraints that may have been set on the instance.
 *
 * @param ucfpos The instance of UCategoryFieldPosition.
 * @draft ICU 64
 */
U_DRAFT void U_EXPORT2
ucfpos_reset(UCategoryFieldPosition* ucfpos);


/**
 * Destroys a UCategoryFieldPosition and releases its memory.
 *
 * @param ucfpos The instance of UCategoryFieldPosition.
 * @draft ICU 64
 */
U_DRAFT void U_EXPORT2
ucfpos_close(UCategoryFieldPosition* ucfpos);


/**
 * Sets a constraint on the field category.
 * 
 * When this instance of UCategoryFieldPosition is passed to ufmtval_nextPosition,
 * positions are skipped unless they have the given category.
 *
 * Any previously set constraints are cleared.
 *
 * For example, to loop over only the number-related fields:
 *
 *     UCategoryFieldPosition* ucfpos = ucfpos_open(ec);
 *     ucfpos_constrainCategory(ucfpos, UFIELDCATEGORY_NUMBER_FORMAT, ec);
 *     while (ufmtval_nextPosition(ufmtval, ucfpos, ec)) {
 *         // handle the number-related field position
 *     }
 *     ucfpos_close(ucfpos);
 *
 * @param ucfpos The instance of UCategoryFieldPosition.
 * @param category The field category to fix when iterating.
 * @param ec Set if an error occurs.
 * @draft ICU 64
 */
U_DRAFT void U_EXPORT2
ucfpos_constrainCategory(
    UCategoryFieldPosition* ucfpos,
    UFieldCategory category,
    UErrorCode* ec);


/**
 * Sets a constraint on the category and field.
 * 
 * When this instance of UCategoryFieldPosition is passed to ufmtval_nextPosition,
 * positions are skipped unless they have the given category and field.
 *
 * Any previously set constraints are cleared.
 *
 * For example, to loop over all grouping separators:
 *
 *     UCategoryFieldPosition* ucfpos = ucfpos_open(ec);
 *     ucfpos_constrainField(ucfpos, UFIELDCATEGORY_NUMBER_FORMAT, UNUM_GROUPING_SEPARATOR_FIELD, ec);
 *     while (ufmtval_nextPosition(ufmtval, ucfpos, ec)) {
 *         // handle the grouping separator position
 *     }
 *     ucfpos_close(ucfpos);
 *
 * @param ucfpos The instance of UCategoryFieldPosition.
 * @param category The field category to fix when iterating.
 * @param field The field to fix when iterating.
 * @param ec Set if an error occurs.
 * @draft ICU 64
 */
U_DRAFT void U_EXPORT2
ucfpos_constrainField(
    UCategoryFieldPosition* ucfpos,
    UFieldCategory category,
    int32_t field,
    UErrorCode* ec);


/**
 * Gets the field category for the current position.
 *
 * The return value is well-defined only after ufmtval_nextPosition returns TRUE.
 *
 * @param ucfpos The instance of UCategoryFieldPosition.
 * @param ec Set if an error occurs.
 * @return The field category saved in the instance.
 * @draft ICU 64
 */
U_DRAFT UFieldCategory U_EXPORT2
ucfpos_getCategory(
    UCategoryFieldPosition* ucfpos,
    UErrorCode* ec);


/**
 * Gets the field for the current position.
 *
 * The return value is well-defined only after ufmtval_nextPosition returns TRUE.
 *
 * @param ucfpos The instance of UCategoryFieldPosition.
 * @param ec Set if an error occurs.
 * @return The field saved in the instance.
 * @draft ICU 64
 */
U_DRAFT int32_t U_EXPORT2
ucfpos_getField(
    UCategoryFieldPosition* ucfpos,
    UErrorCode* ec);


/**
 * Gets the INCLUSIVE start index for the current position.
 *
 * The return value is well-defined only after ufmtval_nextPosition returns TRUE.
 *
 * @param ucfpos The instance of UCategoryFieldPosition.
 * @param ec Set if an error occurs.
 * @return The start index saved in the instance.
 * @draft ICU 64
 */
U_DRAFT int32_t U_EXPORT2
ucfpos_getStartIndex(
    UCategoryFieldPosition* ucfpos,
    UErrorCode* ec);


/**
 * Gets the EXCLUSIVE end index stored for the current position.
 *
 * The return value is well-defined only after ufmtval_nextPosition returns TRUE.
 *
 * @param ucfpos The instance of UCategoryFieldPosition.
 * @param ec Set if an error occurs.
 * @return The end index saved in the instance.
 * @draft ICU 64
 */
U_DRAFT int32_t U_EXPORT2
ucfpos_getEndIndex(
    UCategoryFieldPosition* ucfpos,
    UErrorCode* ec);


struct UFormattedValue;
/**
 * An abstract formatted value: a string with associated field attributes.
 * Many formatters format to types compatible with UFormattedValue.
 *
 * @draft ICU 64
 */
typedef struct UFormattedValue UFormattedValue;


/**
 * Returns a pointer to the formatted string. The pointer is owned by the UFormattedValue. The
 * return value is valid only as long as the UFormattedValue is present and unchanged in memory.
 *
 * The return value is NUL-terminated but could contain internal NULs.
 *
 * @param ufmtval
 *         The object containing the formatted string and attributes.
 * @param pLength Output variable for the length of the string. Ignored if NULL.
 * @param ec Set if an error occurs.
 * @return A NUL-terminated char16 string owned by the UFormattedValue.
 * @draft ICU 64
 */
U_DRAFT const UChar* U_EXPORT2
ufmtval_getString(
    const UFormattedValue* ufmtval,
    int32_t* pLength,
    UErrorCode* ec);


/**
 * Iterates over field positions in the UFormattedValue. This lets you determine the position
 * of specific types of substrings, like a month or a decimal separator.
 *
 * To loop over all field positions:
 *
 *     UCategoryFieldPosition* ucfpos = ucfpos_open(ec);
 *     while (ufmtval_nextPosition(ufmtval, ucfpos, ec)) {
 *         // handle the field position; get information from ucfpos
 *     }
 *     ucfpos_close(ucfpos);
 *
 * @param ufmtval
 *         The object containing the formatted string and attributes.
 * @param ucfpos
 *         The object used for iteration state; can provide constraints to iterate over only
 *         one specific category or field;
 *         see ucfpos_constrainCategory
 *         and ucfpos_constrainField.
 * @param ec Set if an error occurs.
 * @return TRUE if another position was found; FALSE otherwise.
 * @draft ICU 64
 */
U_DRAFT UBool U_EXPORT2
ufmtval_nextPosition(
    const UFormattedValue* ufmtval,
    UCategoryFieldPosition* ucfpos,
    UErrorCode* ec);


#endif /* #if !UCONFIG_NO_FORMATTING */
#endif // __UFORMATTEDVALUE_H__
