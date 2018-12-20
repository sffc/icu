// © 2018 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
package com.ibm.icu.text;

import java.text.Format.Field;

/**
 * Represents a span of a string containing a given field.
 * Similar to FieldPosition.
 *
 * @author sffc
 * @draft ICU 64
 * @provisional This API might change or be removed in a future release.
 */
public class ConstrainedFieldPosition {

    enum ConstraintType {
        NONE,
        FIELD
    };

    ConstraintType fConstraint;
    Field fField;
    int fStart;
    int fLimit;
    Object fValue;

    /**
     * Initializes a CategoryFieldPosition.
     *
     * By default, the CategoryFieldPosition has no iteration constraints.
     *
     * @draft ICU 64
     * @provisional This API might change or be removed in a future release.
     */
    public ConstrainedFieldPosition() {
        reset();
    }

    /**
     * Resets this ConstrainableFieldPosition to its initial state, as if it were newly created.
     *
     * Removes any constraints that may have been set on the instance.
     *
     * @draft ICU 64
     * @provisional This API might change or be removed in a future release.
     */
    public void reset() {
        fConstraint = ConstraintType.NONE;
        fField = null;
        fStart = 0;
        fLimit = 0;
        fValue = null;
    }

    /**
     * Sets a constraint on the field.
     *
     * When this instance of ConstrainableFieldPosition is passed to
     * {@link FormattedValue#nextPosition},
     * positions are skipped unless they have the given category and field.
     *
     * Any previously set constraints are cleared.
     *
     * For example, to loop over all grouping separators:
     *
     *     ConstrainableFieldPosition cfpos;
     *     cfpos.constrainField(NumberFormat.Field.GROUPING_SEPARATOR);
     *     while (fmtval.nextPosition(cfpos)) {
     *         // handle the grouping separator position
     *     }
     *
     * @param field The field to fix when iterating.
     * @draft ICU 64
     * @provisional This API might change or be removed in a future release.
     */
    public void constrainField(Field field) {
        fConstraint = ConstraintType.FIELD;
        fField = field;
    }

    /**
     * Gets the field for the current position.
     *
     * The return value is well-defined only after FormattedValue#nextPosition returns TRUE.
     *
     * @return The field saved in the instance.
     * @draft ICU 64
     * @provisional This API might change or be removed in a future release.
     */
    public Field getField() {
        return fField;
    }

    /**
     * Gets the INCLUSIVE start index for the current position.
     *
     * The return value is well-defined only after FormattedValue#nextPosition returns TRUE.
     *
     * @return The start index saved in the instance.
     * @draft ICU 64
     * @provisional This API might change or be removed in a future release.
     */
    public int getStart() {
        return fStart;
    }

    /**
     * Gets the EXCLUSIVE end index stored for the current position.
     *
     * The return value is well-defined only after FormattedValue#nextPosition returns TRUE.
     *
     * @return The end index saved in the instance.
     * @draft ICU 64
     * @provisional This API might change or be removed in a future release.
     */
    public int getLimit() {
        return fLimit;
    }

    /**
     * Gets the value associated with the current field position.
     * The field value is often not set.
     *
     * The return value is well-defined only after FormattedValue#nextPosition returns TRUE.
     *
     * @return The end index saved in the instance.
     * @draft ICU 64
     * @provisional This API might change or be removed in a future release.
     */
    public Object getFieldValue() {
        return fValue;
    }
}
