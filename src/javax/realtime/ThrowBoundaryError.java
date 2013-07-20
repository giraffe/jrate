// ************************************************************************
//    $Id: ThrowBoundaryError.java 467 2004-12-22 21:58:06Z mdeters $
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
 * This error is thrown by {@link MemoryArea#enter(Runnable)
 * MemoryArea.enter()} (and associated methods) if an exception
 * allocated in a memory area is thrown against its scope boundary;
 * that is, if an exception object cannot propagate further up the
 * call stack because it is being deallocated.  Unfortunately, this
 * means that this Error cannot give any strong clues as to its cause
 * without violating the referencing requirements of RTSJ.
 *
 * @author Morgan Deters <mdeters@cs.wustl.edu>
 */

public class ThrowBoundaryError extends Error {

    public ThrowBoundaryError() {
        super();
    }

    public ThrowBoundaryError(String description) {
        super(description);
    }
}
