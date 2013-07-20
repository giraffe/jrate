// ************************************************************************
//    $Id: AsyncEventHandler.java 429 2004-09-15 20:32:02Z corsaro $
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

import gnu.gcj.RawData;

/**
 * An asynchronous event handler encapsulates code that gets run at
 * some time after an AsyncEvent occurs. It is essentially a
 * java.lang.Runnable with a set of parameter objects, making it very
 * much like a RealtimeThread . The expectation is that there may be
 * thousands of events, with corresponding handlers, averaging about
 * one handler per event. The number of unblocked (i.e., scheduled)
 * handlers is expected to be relatively small. <br>
 *
 * It is guaranteed that multiple firings of an event handler will be
 * serialized. It is also guaranteed that (unless the handler
 * explicitly chooses otherwise) for each firing of the handler, there
 * will be one execution of the handleAsyncEvent() method. For
 * instances of AsyncEventHandler with a release parameter of type
 * SporadicParameters61 have a list of release times which correspond
 * to execution times of AsyncEvent.fire() . The minimum interarrival
 * time specified in SporadicParameters is enforced as defined
 * there. Unless the handler explicitly chooses otherwise there will
 * be one execution of the code in handleAsyncEvent() for each entry
 * in the list. The i th execution of handleAsyncEvent() will be
 * released for scheduling at the time of the i th entry in thelist. 
 * There is no restriction on what handlers may do. They may run for a
 * long or short time, and they may block. (Note: blocked handlers may
 * hold system resources.) Normally, handlers are bound to an
 * execution context dynamically, when their AsyncEvent181 occurs. 
 * This can introduce a (small) time penalty. For critical handlers
 * that can not afford the expense, and where this penalty is a
 * problem, use a BoundAsyncEventHandler. The semantics for memory
 * areas that were defined for realtime threads apply in the same way
 * to instances of AsyncEventHandler They may inherit a scope stack
 * when they are created, and the single parent rule applies to the
 * use of memory scopes for instances of AsyncEventHandler just as it
 * does in realtime threads.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public abstract class AsyncEventHandler implements Schedulable {

    protected RawData natFireCount_;
    
    protected int executionEligibility = -1;

    /**
     *
     */
    protected AsyncEventHandler() {
        // Initialize the native atomic counter.
        this.init();
    }
    /**
     * Atomically set to zero the number of pending executions of this
     * handler and returns the value from before it was cleared. This
     * is used in handlers that can handle multiple firings and that
     * want to collapse them together. The general form for using this
     * is:
     * <code>
     *    public void handleAsyncEvent() {
     *        int fireCount =
     *             getAndClearPendingFireCount();
     *        <handle the events>
     *    }
     * </code>
     * @return an <code>int</code> value representing the pending fire
     * count.
     */
    protected native int getAndClearPendingFireCount();

    /**
     * Atomically decrements the number of pending executions of this
     * handler (if it was non-zero) and returns the value from before
     * the decrement. This can be used in the
     * <code>handleAsyncEvent()</code> method in this form to handle
     * multiple firings:
     *
     * <code>
     *    public void handleAsyncEvent() {
     *       <setup>
     *       do {
     *         <handle the event>
     *       } while(getAndDecrementPendingFireCount()>0);
     *   }
     *</code>
     *
     * This construction is necessary only in the case where one
     * wishes to avoid the setup costs since the framework guarantees
     * that <code>handleAsyncEvent()</code> will be invoked the
     * appropriate number of times.
     * @return an <code>int</code> value representing the pending fire count.
     */
    protected native int getAndDecrementPendingFireCount();

    
    /**
     * Atomically increments the number of pending executions of this
     * handler and returns the value from before the increment. The
     * <code>handleAsyncEvent()</code> method does not need to do
     * this, since the surrounding framework guarantees that the
     * handler will be re-executed the appropriate number of times. It
     * is only of value when there is common setup code that is
     * expensive.
     *
     * @return an <code>int</code> value representing the pending fire
     * count.
     */
    protected native int getAndIncrementPendingFireCount();


    /**
     * Return the number of pending executions of this handler.
     *
     * @return an <code>int</code> value representing the pending fire
     * count.
     */
    protected  native int getPendingFireCount();


    /**
     * If this handler was constructed using a separate Runnable logic
     * object, then that <code>Runnable</code> objects
     * <code>run</code> method is called; This method will be invoked
     * repeatedly while <code>fireCount</code> is greater than zero.
     *
     */
    public abstract void handleAsyncEvent();
    

    /**
     * Used by the asynchronous event mechanism, see {@link
     * AsyncEvent}. This method invokes
     * <code>handleAsyncEvent()</code> repeatedly while the fire count
     * is greater than zero. Applications cannot override this method
     * and should thus override <code>handleAsyncEvent()</code> in
     * subclasses with the logic of the handler.
     *
     */
    public final void run() {
        int fireCount =
             this.getAndIncrementPendingFireCount();
        /*
         * Is some other thread already performing a notification?
         */
         if (fireCount > 0)
             return;
        
        /*
         * The method handleAsynchEvent will take care of consuming
         * all the fired events.
         */
        this.handleAsyncEvent();
    }

    /*
     * Implementation Specific Methods
     */
    private native void init();
    private native void fini();

    
    protected void finalize() {
        this.fini();
    }

}


