// ************************************************************************
//    $Id: MemoryAccessError.java 474 2005-01-24 11:03:10Z mdeters $
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
 * This error is thrown when an illegal access occurs---for example,
 * when {@link MemoryArea.newInstance(Class) MemoryArea.newInstance()}
 * is used to construct an object in an inaccessible memory area, or
 * when a {@link NoHeapRealtimeThread} has a crisis of identity and
 * decides it wants to try referring to the heap anyway.
 *
 * @author Morgan Deters <mdeters@cs.wustl.edu>
 */

public class MemoryAccessError extends Error {

    public MemoryAccessError() {
        super();
    }

    public MemoryAccessError(String description) {
        super(description);
    }
}
