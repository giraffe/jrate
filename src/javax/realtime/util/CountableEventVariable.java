// ************************************************************************
//    $Id: CountableEventVariable.java 416 2004-02-22 18:35:45Z corsaro $
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

package javax.realtime.util; 

public class CountableEventVariable {

    private int eventCount;

    
    public CountableEventVariable() {
        this(0);
    }
    
    public CountableEventVariable(int eventCount) {
        this.eventCount = eventCount;
    }
    
    public synchronized void await() throws InterruptedException {
        if (this.eventCount == 0)
            this.wait();
        this.eventCount--;
    }

    public synchronized void await(long timeoutMillis)
        throws InterruptedException
    {
        if (this.eventCount == 0)
            super.wait(timeoutMillis);
        this.eventCount--;
    }

    public synchronized void await(long timeoutMillis,
                                   int timeoutNanos)
        throws InterruptedException
    {
        if (this.eventCount == 0)
            this.wait(timeoutMillis, timeoutNanos);
        this.eventCount--;
    }

    public synchronized void signal() {
        this.eventCount++;
        this.notify();
    }

    public synchronized void broadCastSignal() {
        this.eventCount++;
        this.notifyAll();
    }

    public synchronized int getCount() {
        return this.eventCount;
    }
}
