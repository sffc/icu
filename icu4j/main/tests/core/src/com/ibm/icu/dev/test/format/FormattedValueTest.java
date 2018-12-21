// © 2018 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
package com.ibm.icu.dev.test.format;

import static org.junit.Assert.assertEquals;

import org.junit.Test;

import com.ibm.icu.text.ConstrainedFieldPosition;
import com.ibm.icu.text.ConstrainedFieldPosition.ConstraintType;

/**
 * @author sffc
 */
public class FormattedValueTest {
    @Test
    public void testBasic() {
        ConstrainedFieldPosition cfpos = new ConstrainedFieldPosition();
        assertEquals("constraint", ConstraintType.NONE, cfpos.getConstraintType());
        assertEquals("field", null, cfpos.getField());
        assertEquals("field value", null, cfpos.getFieldValue());
        assertEquals("start", 0, cfpos.getStart());
        assertEquals("limit", 0, cfpos.getLimit());
        assertEquals("context", 0L, cfpos.getInt64IterationContext());
    }
}
