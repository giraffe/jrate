// ************************************************************************
//    $Id: AccessViolationError.java 416 2004-02-22 18:35:45Z corsaro $
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
 * The exception thrown on an attempt to enter a
 * <code>PrivateScopedMemory</code> which is not owned.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class AccessViolationError extends Error {

    /**
     * Creates a new <code>AccessViolationError</code> instance.
     *
     */
    public AccessViolationError() {
        super();
    }

    /**
     * Creates a new <code>AccessViolationError</code> instance.
     *
     * @param description a <code>String</code> value representing the
     * description for the exception
     */
    public AccessViolationError(String description) {
        super(description);
    }
}