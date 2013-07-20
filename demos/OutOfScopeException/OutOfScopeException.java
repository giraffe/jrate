// ************************************************************************
//    $Id: OutOfScopeException.java 439 2004-10-26 21:23:28Z mdeters $
// ************************************************************************
//
//                                jRate
//
//               Copyright (C) 2001-2002 by Angelo Corsaro.
//                         <corsaro@ece.uci.edu>
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
import javax.realtime.*;

/**
 * This class tries to propagate an exception object out of its own
 * scope.  The current RTSJ says that a ThrowBoundaryError is thrown
 * at its scope boundary.  The TimeSys implementation allocates this
 * ThrowBoundaryError in ImmortalMemory (and doesn't use a
 * singleton---each one is allocated anew).  jRate allocates the
 * ThrowBoundaryError object in the parent scope, which will give a
 * performance hit unwinding the stack, but won't leak memory.
 *
 * @author <a href="mailto:mdeters@cse.wustl.edu">Morgan Deters</a>
 * @version 1.0
 */
public class OutOfScopeException {
  public static void main(String[] args) throws InterruptedException {
    final Runnable r =
      new Runnable() {
        public void run() {
          Runnable rr =
            new Runnable() {
              public void run() {
                throw new RuntimeException("foo!");
              }
            };
          try {
            LTMemory lt = new LTMemory(10240, 10240);
            lt.enter(rr);
          } catch(Error t) {
            System.out.println("CATCH");
            System.out.println(t+" "+Integer.toHexString(System.identityHashCode(t)));
            System.out.println(MemoryArea.getMemoryArea(t));
            System.out.println(RealtimeThread.getCurrentMemoryArea());
            throw t;
          }
        }
      };
    Runnable r2 =
      new Runnable() {
        public void run() {
          try {
            System.out.println(">>");
            LTMemory lt = new LTMemory(5120, 5120);
            lt.enter(r);
          } catch(Throwable t) {
            System.out.println("<< "+t+" "+Integer.toHexString(System.identityHashCode(t)));
            System.out.println("<< "+MemoryArea.getMemoryArea(t));
          } finally {
            System.out.println("<< "+RealtimeThread.getCurrentMemoryArea());
          }
        }
      };
    RealtimeThread rtt =
      new RealtimeThread(new PriorityParameters(5),
                         new AperiodicParameters(new RelativeTime(5000,0),
                                                 new RelativeTime(10000,0),
                                                 null, null),
                         new MemoryParameters(MemoryParameters.NO_MAX,
                                              MemoryParameters.NO_MAX),
                         HeapMemory.instance(),
                         null,
                         r2);
    System.out.println("start");
    rtt.start();
    rtt.join();
    System.out.println("done");
  }
}
