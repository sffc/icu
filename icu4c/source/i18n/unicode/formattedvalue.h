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


// Forward-declarations
class CategoryFieldPositionImpl;


/**
 * Represents a span of a string containing a given field.
 * Similar to FieldPosition.
 *
 * @draft ICU 64
 */
class U_I18N_API CategoryFieldPosition : public UMemory {
  public:
    /** @draft ICU 64 */
    virtual ~CategoryFieldPosition();

    /**
     * Initializes a CategoryFieldPosition.
     *
     * By default, the CategoryFieldPosition has no iteration constraints.
     *
     * @draft ICU 64
     */
    CategoryFieldPosition();

    /**
     * Resets this CategoryFieldPosition to its initial state, as if it were newly created.
     *
     * Removes any constraints that may have been set on the instance.
     *
     * @draft ICU 64
     */
    void reset();

    /**
     * Sets a constraint on the field category.
     * 
     * When this instance of CategoryFieldPosition is passed to FormattedValue#nextPosition,
     * positions are skipped unless they have the given category.
     *
     * Any previously set constraints are cleared.
     *
     * For example, to loop over only the number-related fields:
     *
     *     CategoryFieldPosition cfpos;
     *     cfpos.constrainCategory(UFIELDCATEGORY_NUMBER_FORMAT);
     *     while (fmtval.nextPosition(cfpos, status)) {
     *         // handle the number-related field position
     *     }
     *
     * @param category The field category to fix when iterating.
     * @draft ICU 64
     */
    void constrainCategory(UFieldCategory category);

    /**
     * Sets a constraint on the category and field.
     * 
     * When this instance of CategoryFieldPosition is passed to FormattedValue#nextPosition,
     * positions are skipped unless they have the given category and field.
     *
     * Any previously set constraints are cleared.
     *
     * For example, to loop over all grouping separators:
     *
     *     CategoryFieldPosition cfpos;
     *     cfpos.constrainField(UFIELDCATEGORY_NUMBER_FORMAT, UNUM_GROUPING_SEPARATOR_FIELD);
     *     while (fmtval.nextPosition(cfpos, status)) {
     *         // handle the grouping separator position
     *     }
     *
     * @param field The field to fix when iterating.
     * @param ec Set if an error occurs.
     * @draft ICU 64
     */
    void constrainField(UFieldCategory category, int32_t field);

    /**
     * Gets the field category for the current position.
     *
     * The return value is well-defined only after FormattedValue#nextPosition returns TRUE.
     *
     * @return The field category saved in the instance.
     * @draft ICU 64
     */
    inline UFieldCategory getCategory() const {
        return fCategory;
    };

    /**
     * Gets the field for the current position.
     *
     * The return value is well-defined only after FormattedValue#nextPosition returns TRUE.
     *
     * @return The field saved in the instance.
     * @draft ICU 64
     */
    inline int32_t getField() const {
        return fField;
    };

    /**
     * Gets the INCLUSIVE start index for the current position.
     *
     * The return value is well-defined only after FormattedValue#nextPosition returns TRUE.
     *
     * @return The start index saved in the instance.
     * @draft ICU 64
     */
    inline int32_t getStartIndex() const {
        return fStartIndex;
    };

    /**
     * Gets the EXCLUSIVE end index stored for the current position.
     *
     * The return value is well-defined only after FormattedValue#nextPosition returns TRUE.
     *
     * @return The end index saved in the instance.
     * @draft ICU 64
     */
    inline int32_t getEndIndex() const {
        return fEndIndex;
    };

  private:
    enum ConstraintType {
        CONSTRAINT_NONE,
        CONSTRAINT_CATEGORY,
        CONSTRAINT_FIELD
    } fConstraint;
    UFieldCategory fCategory;
    int32_t fField;
    int32_t fStartIndex;
    int32_t fEndIndex;

    friend class CategoryFieldPositionImpl;
};


/**
 * An abstract formatted value: a string with associated field attributes.
 * Many formatters format to classes implementing FormattedValue.
 *
 * @draft ICU 64
 */
class U_I18N_API FormattedValue {
  public:
    virtual ~FormattedValue();

    /**
     * Returns the formatted string as a self-contained UnicodeString.
     *
     * If you need the string within the current scope only, consider #toTempString.
     *
     * @param status Set if an error occurs.
     * @return a UnicodeString containing the formatted string.
     *
     * @draft ICU 64
     */
    virtual UnicodeString toString(UErrorCode& status) const = 0;

    /**
     * Returns the formatted string as a read-only alias to memory owned by the FormattedValue.
     *
     * The return value is valid only as long as this FormattedValue is present and unchanged in
     * memory. If you need the string outside the current scope, consider #toString.
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
     * Iterates over field positions in the FormattedValue. This lets you determine the position
     * of specific types of substrings, like a month or a decimal separator.
     *
     * To loop over all field positions:
     *
     *     CategoryFieldPosition cfpos;
     *     while (fmtval.nextPosition(cfpos, status)) {
     *         // handle the field position; get information from cfpos
     *     }
     *
     * @param cfpos
     *         The object used for iteration state. This can provide constraints to iterate over
     *         only one specific category or field;
     *         see CategoryFieldPosition#constrainCategory
     *         and CategoryFieldPosition#constrainField.
     * @param status Set if an error occurs.
     * @return TRUE if a new occurrence of the field was found;
     *         FALSE otherwise or if an error was set.
     *
     * @draft ICU 64
     */
    virtual UBool nextPosition(CategoryFieldPosition& cfpos, UErrorCode& status) const = 0;
};


U_NAMESPACE_END

#endif /* #if !UCONFIG_NO_FORMATTING */
#endif // __FORMATTEDVALUE_H__
