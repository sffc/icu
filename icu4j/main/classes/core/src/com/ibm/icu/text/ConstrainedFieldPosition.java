// © 2018 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
package com.ibm.icu.text;

import java.text.Format.Field;

/**
 * Represents a span of a string containing a given field.
 *
 * This class differs from FieldPosition in the following ways:
 *
 *   1. It has information on the field category.
 *   2. It allows you to set constraints to use when iterating over field positions.
 *   3. It is used for the newer FormattedValue APIs.
 *
 * @author sffc
 * @draft ICU 64
 * @provisional This API might change or be removed in a future release.
 */
public class ConstrainedFieldPosition {

    /**
     * Represents the type of constraint for ConstrainedFieldPosition.
     *
     * Constraints are used to control the behavior of iteration in FormattedValue.
     *
     * @draft ICU 64
     * @provisional This API might change or be removed in a future release.
     */
    public enum ConstraintType {
        /**
         * Represents the lack of a constraint.
         *
         * @draft ICU 64
         * @provisional This API might change or be removed in a future release.
         */
        NONE,

        /**
         * Represents that the field is constrained. Use {@link #getField} to access the field.
         *
         * FormattedValue implementations should not change the field when this constraint is active.
         *
         * @draft ICU 64
         * @provisional This API might change or be removed in a future release.
         */
        FIELD
    };

    ConstraintType fConstraint = ConstraintType.NONE;
    Field fField = null;
    Object fValue= null;
    int fStart = 0;
    int fLimit = 0;
    long fContext = 0L;

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
     * Resets this ConstrainedFieldPosition to its initial state, as if it were newly created:
     *
     * - Removes any constraints that may have been set on the instance.
     * - Resets the iteration position.
     *
     * @draft ICU 64
     * @provisional This API might change or be removed in a future release.
     */
    public void reset() {
        fConstraint = ConstraintType.NONE;
        fField = null;
        fValue = null;
        fStart = 0;
        fLimit = 0;
        fContext = 0;
    }

    /**
     * Sets a constraint on the field.
     *
     * When this instance of ConstrainedFieldPosition is passed to {@link FormattedValue#nextPosition}, positions are
     * skipped unless they have the given category and field.
     *
     * Any previously set constraints are cleared.
     *
     * For example, to loop over all grouping separators:
     *
     * <pre>
     * ConstrainedFieldPosition cfpos;
     * cfpos.constrainField(NumberFormat.Field.GROUPING_SEPARATOR);
     * while (fmtval.nextPosition(cfpos)) {
     *   // handle the grouping separator position
     * }
     * </pre>
     *
     * Changing the constraint while in the middle of iterating over a FormattedValue
     * does not generally have well-defined behavior.
     *
     * @param field
     *            The field to fix when iterating.
     * @draft ICU 64
     * @provisional This API might change or be removed in a future release.
     */
    public void constrainField(Field field) {
        fConstraint = ConstraintType.FIELD;
        fField = field;
    }

    /**
     * Gets the currently active constraint.
     *
     * @return The currently active constraint type.
     * @draft ICU 64
     * @provisional This API might change or be removed in a future release.
     */
    public ConstraintType getConstraintType() {
        return fConstraint;
    }

    /**
     * Gets the field for the current position.
     *
     * If a field constraint was set, this function returns the constrained
     * field. Otherwise, the return value is well-defined only after
     * FormattedValue#nextPosition returns TRUE.
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
     * Gets the value associated with the current field position. The field value is often not set.
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

    /**
     * Gets an int64 that FormattedValue implementations may use for storage.
     *
     * The initial value is zero.
     *
     * Users of FormattedValue should not need to call this method.
     *
     * @return The current iteration context from {@link #setInt64IterationContext}.
     * @draft ICU 64
     * @provisional This API might change or be removed in a future release.
     */
    public long getInt64IterationContext() {
        return fContext;
    }

    /**
     * Sets an int64 that FormattedValue implementations may use for storage.
     *
     * Intended to be used by FormattedValue implementations.
     *
     * @param context
     *            The new iteration context.
     * @draft ICU 64
     * @provisional This API might change or be removed in a future release.
     */
    public void setInt64IterationContext(long context) {
        fContext = context;
    }

    /**
     * Sets new values for the primary public getters.
     *
     * Intended to be used by FormattedValue implementations.
     *
     * @param field
     *            The new field.
     * @param value
     *            The new field value.
     * @param start
     *            The new inclusive start index.
     * @param limit
     *            The new exclusive end index.
     * @draft ICU 64
     * @provisional This API might change or be removed in a future release.
     */
    public void setState(Field field, Object value, int start, int limit) {
        fField = field;
        fValue = value;
        fStart = start;
        fLimit = limit;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("CFPos[");
        sb.append(fStart);
        sb.append('-');
        sb.append(fLimit);
        sb.append(' ');
        sb.append(fField);
        sb.append(']');
        return sb.toString();
    }
}
