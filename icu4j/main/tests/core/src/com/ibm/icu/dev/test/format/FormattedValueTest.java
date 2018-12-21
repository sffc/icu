// © 2018 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
package com.ibm.icu.dev.test.format;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;

import java.math.BigDecimal;
import java.text.AttributedCharacterIterator;
import java.text.Format;
import java.text.Format.Field;
import java.util.HashSet;
import java.util.Set;

import org.junit.Test;

import com.ibm.icu.text.ConstrainedFieldPosition;
import com.ibm.icu.text.ConstrainedFieldPosition.ConstraintType;
import com.ibm.icu.text.FormattedValue;
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

    public static void assertFieldPositions(String message, FormattedValue fv, Object[][] expectedFieldPositions) {
        // Calculate some initial expected values
        int stringLength = fv.toString().length();
        HashSet<Format.Field> uniqueFields = new HashSet<>();
        for (int i=0; i<expectedFieldPositions.length; i++) {
            uniqueFields.add((Format.Field) expectedFieldPositions[i][0]);
        }
        String baseMessage = message + ": " + fv.toString() + ": ";

        // Check the AttributedCharacterIterator
        AttributedCharacterIterator fpi = fv.toCharacterIterator();
        Set<AttributedCharacterIterator.Attribute> allAttributes = fpi.getAllAttributeKeys();
        assertEquals(baseMessage + "All known fields should be in the iterator", uniqueFields.size(), allAttributes.size());
        assertEquals(baseMessage + "Iterator should have length of string output", stringLength, fpi.getEndIndex());
        int i = 0;
        for (char c = fpi.first(); c != AttributedCharacterIterator.DONE; c = fpi.next(), i++) {
            Set<AttributedCharacterIterator.Attribute> currentAttributes = fpi.getAttributes().keySet();
            int attributesRemaining = currentAttributes.size();
            for (Object[] cas : expectedFieldPositions) {
                NumberFormat.Field expectedField = (NumberFormat.Field) cas[0];
                int expectedBeginIndex = (Integer) cas[1];
                int expectedEndIndex = (Integer) cas[2];
                if (expectedBeginIndex > i || expectedEndIndex <= i) {
                    // Field position does not overlap with the current character
                    continue;
                }

                assertTrue(baseMessage + "Character at " + i + " should have field " + expectedField,
                        currentAttributes.contains(expectedField));
                assertTrue(baseMessage + "Field " + expectedField + " should be a known attribute",
                        allAttributes.contains(expectedField));
                int actualBeginIndex = fpi.getRunStart(expectedField);
                int actualEndIndex = fpi.getRunLimit(expectedField);
                assertEquals(baseMessage + expectedField + " begin @" + i, expectedBeginIndex, actualBeginIndex);
                assertEquals(baseMessage + expectedField + " end @" + i, expectedEndIndex, actualEndIndex);
                attributesRemaining--;
            }
            assertEquals(baseMessage + "Should have looked at every field", 0, attributesRemaining);
        }
        assertEquals(baseMessage + "Should have looked at every character", stringLength, i);
    }
}
