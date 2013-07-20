// ************************************************************************
//    $Id: AsyncEvent.java 429 2004-09-15 20:32:02Z corsaro $
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
 * An asynchronous event represents something that can happen, like a
 * light turning red. It can have a set of handlers associated with
 * it, and when the event occurs, the handler is scheduled by the
 * scheduler to which it holds a reference (see AsyncEventHandler
 * and Scheduler ). A major motivator for this style of building
 * events is that we expect to have lots of events and lots of event
 * handlers. An event handler is logically very similar to a thread,
 * but it is intended to have a much lower cost (in both time and
 * space) -assuming that a relatively small number of events are fired
 * and in the process of being handled at once. AsyncEvent.fire()
 * differs from a method call because the handler (a) has scheduling
 * parameters and (b) is executed asynchronously.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class AsyncEvent {

    // The data structure used to keep track of the handlers have to
    // be allocated in the same memory area as the AsyncEvent.
    protected PriorityQueue handlerList;
    protected PriorityQueue.ForwardIterator listIterator;
    protected ReleaseParameters releaseParams;
    
    public AsyncEvent() {
        this.handlerList = new PriorityQueue();
        this.listIterator = this.handlerList.iterator();
    }

    /**
     * Creates a new <code>AsyncEvent</code> instance by passing the
     * release paramenters associated with this event. <b>NOTE</b>
     * this ctor is not standard.
     *
     * @param releaseParams a <code>ReleaseParameters</code> value
     */
    public AsyncEvent(ReleaseParameters releaseParams) {
        this.handlerList = new PriorityQueue();
        this.listIterator = this.handlerList.iterator();
        this.releaseParams = releaseParams;
    }

    /**
     * Add a handler to the set of handlers associated with this
     * event. An Async-Event may have more than one associated
     * handler.<br>
     *
     * Since this affects the constraints expressed in the release
     * parameters of the existing schedulable objects, this may change
     * the feasibility of the current schedule.
     *
     * @param handler The new handler to add to the list of handlers
     * already associated with this. If handler is null then nothing
     * happens.
     */
    public void addHandler(AsyncEventHandler handler) {
        int eligibility = handler.executionEligibility();
        this.handlerList.add(handler, eligibility);
    }

    /**
     * Binds this to an external event (a happening). The meaningful
     * values of happening are implementation dependent. This
     * <code>AsyncEvent</code> is considered to have occurred whenever
     * the external event occurs.
     *
     * @param happening An implementation dependent value that binds
     * this <code>AsyncEvent</code> to some external event.
     * @exception UnknownHappeningException -if
     * the happening string is not supported by the system.
     */
    public void bindTo(String happening) throws UnknownHappeningException {
        throw new UnknownHappeningException("No Happening Implemented Yet!");
    }


    /**
     * Create a {@link ReleaseParameters} block appropriate to the timing
     * charac-teristics of this event. The default is the most
     * pessimistic: {@link AperiodicParameters}. This is typically called
     * by code that is setting up a handler for this event that will
     * fill in the parts of the release parameters that it knows the
     * values for, like cost.
     *
     * @return a <code>ReleaseParameters</code> value
     */
    public ReleaseParameters createReleaseParameters() {
        // Returns the release parameters with wich the event was
        // built, or the release parameters of the most eligible
        // handler.
        if (this.releaseParams != null)
            return this.releaseParams;
        else
            return ((AsyncEventHandler)this.listIterator.next()).getReleaseParameters();
    }

    
    /**
     * Fire (schedule the run() methods of) the handlers associated
     * with this event.<p>
     *
     * <b>Implementation Detail:</b> As currently implemented this
     * method has linear time complexity in the number of registered
     * handler.
     */
    public void fire() {
        // Set-up the iterator
        //         this.handlerList.iterator(this.listIterator);
        //         AsyncEventHandler handler = null;
        //         while ((handler = (AsyncEventHandler)this.listIterator.next()) != null)
        //             handler.run();
        // Set-up the iterator
        PriorityQueue.ForwardIterator listIterator = this.handlerList.iterator(); 
        AsyncEventHandler handler = null;
        while ((handler = (AsyncEventHandler)listIterator.next()) != null)
            handler.run();
    }


    /**
     * Returns true if and only if this event is handled by this
     * handler.
     *
     * @param handler an <code>AsyncEventHandler</code> value
     * @return true if the event is handled by the given handler.
     */
    public boolean handledBy(AsyncEventHandler handler) {
        return this.handlerList.contains(handler);
    }

    /**
     * Remove a handler from the set associated with this event.
     *
     * @param handler The handler to be disassociated from this. If
     * null nothing happens. If not already associated with this then
     * nothing happens.
     */
    public void removeHandler(AsyncEventHandler handler) {
        this.handlerList.remove(handler); 
    }

    /**
     * Associate a new handler with this event, removing all existing
     * handlers. Since this affects the constraints expressed in the
     * release parameters of the existing schedulable objects, this
     * may change the feasibility of the current schedule.
     *
     * @param handler The new and only handler to be associated with
     * this. If handler is null then no handler will be associated
     * with this (i.e., remove all handlers).
     */
    public void setHandler(AsyncEventHandler handler) {
        throw new UnimplementedFeatureError("Not Implemented in this versionf of jRate!");
    }

    /**
     * Removes a binding to an external event (a happening). The
     * meaningful val-ues of happening are implementation dependent.
     *
     * @param happening An implementation dependent value representing
     * some external event to which this <code>AsyncEvent</code> is bound.
     * @exception UnknownHappeningException -if this
     * <code>AsyncEvent</code> is not bound to the given
     * <code>happening</code> or the given happening string is not
     * supported by the system.
     */
    public void unbindTo(String happening) throws UnknownHappeningException {
        throw new UnknownHappeningException("No Happening Implemented Yet!");
    }
}
