// © 2018 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html

#ifndef __FORMATTEDVALUE_H__
#define __FORMATTEDVALUE_H__

#include "unicode/utypes.h"
#if !UCONFIG_NO_FORMATTING

#include "unicode/appendable.h"
#include "unicode/fpositer.h"
#include "unicode/unistr.h"
#include "unicode/uformattedvalue.h"

U_NAMESPACE_BEGIN


/**
 * An abstract formatted value: a string with associated field attributes.
 * Many formatters format to classes implementing UFormattedValue.
 *
 * @draft ICU 64
 */
class U_I18N_API FormattedValue {
  public:
    virtual ~FormattedValue();

    /**
     * Returns a formatted string.
     *
     * @param status Set if an error occurs.
     * @return a UnicodeString containing the formatted string.
     *
     * @draft ICU 64
     */
    virtual UnicodeString toString(UErrorCode& status) const = 0;

    /**
     * Returns a temporary formatted string. The object returned is a read-only alias to memory
     * owned by the FormattedValue. The return value is valid only as long as this FormattedValue
     * is present and unchanged in memory.
     *
     * @param status Set if an error occurs.
     * @return a temporary UnicodeString containing the formatted string.
     *
     * @draft ICU 64
     */
    virtual UnicodeString toTempString(UErrorCode& status) const = 0;

    /**
     * Appends the formatted string to an Appendable.
     *
     * @param appendable
     *         The Appendable to which to append the string output.
     * @param status Set if an error occurs.
     * @return The same Appendable, for chaining.
     *
     * @draft ICU 64
     * @see Appendable
     */
    virtual Appendable& appendTo(Appendable& appendable, UErrorCode& status) const = 0;

    /**
     * Determines the start (inclusive) and end (exclusive) indices of the next occurrence of the
     * given field category and field value in the formatted string.
     *
     * For example, to loop over all instances of a UDAT_YEAR_FIELD:
     *
     *     int32_t startIndex = 0, endIndex = 0;
     *     while (fmtval.nextPositionForFieldCategoryAndValue(
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
     * If you need all positions for a category, use #getAllPositionsForFieldCategory.
     *
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
    virtual UBool nextPositionForFieldCategoryAndValue(
        UFieldCategory category,
        int32_t fieldValue,
        int32_t* startIndex,
        int32_t* endIndex,
        UErrorCode& status) const = 0;

    /**
     * Populates an iterator for looping over all positions for a given field category.
     *
     * If you need positions for only one field, use #nextPositionForFieldCategoryAndValue().
     *
     * @param category
     *         The desired category of fields.
     * @param iterator
     *         The FieldPositionIterator to be overwritten with field information.
     * @param status set if an error occurs.
     *
     * @draft ICU 64
     */
    virtual void getAllPositionsForFieldCategory(
        UFieldCategory category,
        FieldPositionIterator& iterator,
        UErrorCode& status) const = 0;
};


U_NAMESPACE_END

#endif /* #if !UCONFIG_NO_FORMATTING */
#endif // __FORMATTEDVALUE_H__
