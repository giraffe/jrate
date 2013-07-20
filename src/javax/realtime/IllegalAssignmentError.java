// ************************************************************************
//    $Id: IllegalAssignmentError.java 416 2004-02-22 18:35:45Z corsaro $
// ************************************************************************
//
//                                jRate
//
//               Copyright (C) 2001-2004 by Angelo Corsaro.
//                         <corsaro@cse.wustl.edu>
//                          All Rights Reserved.
//
//   Permission to use, copy, modify, and distribute this software and
//   its  documentation for any purpose is hereby  granted without fee,
//   provided that the above copyright notice appear in all copies and
//   that both that copyright notice and this permission notice appear
//   in  supporting  documentation. I don't make  any  representations
//   about the  suitability  of this  software for any  purpose. It is
//   provided "as is" without express or implied warranty.
//
//
// *************************************************************************
//  
// *************************************************************************

package javax.realtime;

/**
 * The exception thrown on an attempt to make an illegal assignment. 
 * For example, this will be thrown if logic attempts to assign a
 * reference to an object in <code>ScopedMemory</code> to a field in an object in
 * <code>ImmortalMemory<code>.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class IllegalAssignmentError extends Error {

    /**
     * Creates a new <code>IllegalAssignmentError</code> instance.
     *
     */
    public IllegalAssignmentError() {
        super();
    }

    /**
     * Creates a new <code>IllegalAssignmentError</code> instance.
     *
     * @param description a <code>String</code> value representing the
     * description for the exception
     */
    public IllegalAssignmentError(String description) {
        super(description);
    }
}
