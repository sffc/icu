// © 2018 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
package com.ibm.icu.dev.test.format;

import static org.junit.Assert.assertEquals;

import java.math.BigDecimal;
import java.text.Format.Field;

import org.junit.Test;

import com.ibm.icu.text.ConstrainedFieldPosition;
import com.ibm.icu.text.ConstrainedFieldPosition.ConstraintType;
import com.ibm.icu.text.NumberFormat;

/**
 * @author sffc
 */
public class FormattedValueTest {
    @Test
    public void testBasic() {
        ConstrainedFieldPosition cfpos = new ConstrainedFieldPosition();
        assertAllPartsEqual(
                "basic",
                cfpos,
                ConstraintType.NONE,
                null,
                null,
                0,
                0,
                0L);
    }

    @Test
    public void testSetters() {
        ConstrainedFieldPosition cfpos = new ConstrainedFieldPosition();

        cfpos.constrainField(NumberFormat.Field.COMPACT);
        assertAllPartsEqual(
            "setters 1",
            cfpos,
            ConstraintType.FIELD,
            NumberFormat.Field.COMPACT,
            null,
            0,
            0,
            0L);

        cfpos.setInt64IterationContext(42424242424242L);
        assertAllPartsEqual(
            "setters 2",
            cfpos,
            ConstraintType.FIELD,
            NumberFormat.Field.COMPACT,
            null,
            0,
            0,
            42424242424242L);

        cfpos.setState(NumberFormat.Field.COMPACT, BigDecimal.ONE, 5, 10);
        assertAllPartsEqual(
            "setters 3",
            cfpos,
            ConstraintType.FIELD,
            NumberFormat.Field.COMPACT,
            BigDecimal.ONE,
            5,
            10,
            42424242424242L);
    }

    private void assertAllPartsEqual(String messagePrefix, ConstrainedFieldPosition cfpos, ConstraintType constraint,
            Field field, Object value, int start, int limit, long context) {
        assertEquals(messagePrefix + ": constraint", constraint, cfpos.getConstraintType());
        assertEquals(messagePrefix + ": field", field, cfpos.getField());
        assertEquals(messagePrefix + ": field value", value, cfpos.getFieldValue());
        assertEquals(messagePrefix + ": start", start, cfpos.getStart());
        assertEquals(messagePrefix + ": limit", limit, cfpos.getLimit());
        assertEquals(messagePrefix + ": context", context, cfpos.getInt64IterationContext());
    }
}
