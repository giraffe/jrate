// ************************************************************************
//    $Id: AsynchronouslyInterruptedException.java 467 2004-12-22 21:58:06Z mdeters $
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
 * An special exception that is thrown in response to an attempt to
 * asynchronously transfer the locus of control of a {@link
 * RealtimeThread}. When a method is declared with
 * <code>AsynchronouslyInterruptedException</code> in its throws
 * clause the platform is expected to asynchronously throw this
 * exception if {@link RealtimeThread#interrupt()} is called while the
 * method is executing, or if such an interrupt is pending any time
 * control returns to the method. The interrupt is not thrown while
 * any methods it invokes are executing, unless they are, in turn,
 * declared to throw the exception. This is intended to allow
 * long-running computations to be terminated without the overhead or
 * latency of polling with java.lang.Thread.interrupted() . The throws
 * AsynchronouslyInterruptedException clause is a marker on a stack
 * frame which allows a method to be statically marked as
 * asynchronously interruptible. Only methods that are marked this way
 * can be interrupted. When Thread.interrupt() , public void
 * interrupt()27 ,or this.fire() is called, the
 * AsynchronouslyInterruptedException is compared against any
 * currently pending AsynchronouslyInterruptedException on the thread. 
 * If there is none, or if the depth of the
 * AsynchronouslyInterruptedException is less than the currently
 * pending AsynchronouslyInterruptedException - i.e., it is targeted
 * at a less deeply nested method call - it becomes the currently
 * pending interrupt. Otherwise, it is discarded. If the current
 * method is interruptible, the exception is thrown on the thread. 
 * Otherwise, it just remains pending until control returns to an
 * interruptible method, at which point the
 * AsynchronouslyInterruptedException is thrown. When an interrupt is
 * caught, the caller should invoke the happened() method on the
 * AsynchronouslyInterruptedException in which it is interested to see
 * if it matches the pending AsynchronouslyInterruptedException . If
 * so, the pending AsynchronouslyInterruptedException is cleared from
 * the thread. Otherwise, it will continue to propagate outward. 
 * Thread.interrupt() and RealtimeThread.interrupt() generate a system
 * available generic AsynchronouslyInterruptedException which will
 * always propagate outward through interruptible methods until the
 * generic AsynchronouslyInterruptedException is identified and
 * stopped. Other sources (e.g., this.fire() and Timed201 ) will
 * generate a specific instance of AsynchronouslyInterruptedException
 * which applications can identify and thus limit propagation.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class AsynchronouslyInterruptedException extends InterruptedException {

    public AsynchronouslyInterruptedException() {
        super();
    }

    // TODO: Implement Me!!!
}
