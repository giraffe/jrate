// ************************************************************************
//    $Id: ScopedPortal.java 474 2005-01-24 11:03:10Z mdeters $
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
import javax.realtime.RealtimeThread;
import javax.realtime.ScopedMemory;
import javax.realtime.LTMemory;

/**
 * This class illustrates the basic behaviour of scoped memory area
 * portals.  It tries various things that should show exceptions, and
 * various things that should not.  See the documentation for the
 * {@link #run()} method below for specifics.
 *
 * @author <a href="mailto:mdeters@cse.wustl.edu">Morgan Deters</a>
 * @version 1.0
 */
public class ScopedPortal extends RealtimeThread {
    /** Bootstraps the ScopedPortal application by creating a new
     * ScopedPortal and starting it
     * @param args pass -t to get exception stack traces */
    public static void main(String[] args) {
        boolean tracing = false;
        if(args.length > 0) {
            if(args.length == 1 && "-t".equals(args[0])) {
                tracing = true;
            } else {
                System.err.println("usage: scopedPortal [ -t ]");
                System.err.println("       -t   turn on exception stack tracing");
                System.exit(1);
            }
        }
        new ScopedPortal(tracing).start();
    }

    public static final int KB = 1024;
    public static final int MEMSIZE = 1000 * KB;

    /** True if exception stack traces are printed (if false, just the names
     * of the exceptions are printed) */
    private boolean traces;

    /** Construct a new ScopedPortal.
     * @param traces true if exception stack traces should be printed
     *               (if false, just prints exception messages) */
    public ScopedPortal(boolean traces) {
        this.traces = traces;
    }

    /** Performs the main work of the ScopedPortal application.
     * <p>In particular, it performs these steps, in order:
     * <ul>It creates of a 10-kilobyte {@link javax.realtime.LTMemory LTMemory}
     *     scoped memory area and enters it.
     * <li>It creates a {@link String} object &quot;Foo&quot; in the area
     *     and sets the portal to it.
     * <li>It gets the portal and prints its address and interpretation (its
     *     <i>interpretation</i> is the result of its
     *     {@link Object#toString()} method.  The
     *     <a href="http://www.timesys.com/">RTSJ reference implementation
     *     from TimeSys</a> segfaults.  (Apparently, then, all conforming RTSJ
     *     implementations should do likewise?)
     * <li>It exits the memory area.  All objects, including the portal object,
     *     should be collected.  <i>However, the
     *     <a href="http://www.rtj.org/">specification</a> does not
     *     require the clearing of the portal reference.</i>
     * <li>It attempts to get the portal from the outside and prints information
     *     about the attempt (whether this operation should succeed or throw
     *     an exception is a matter under debate; the spec doesn't say anything
     *     about an exception, but if you can get a portal from the outside,
     *     you can bend the RTSJ memory model to the point of absurdity).
     * <li>It re-enters the same memory area (all objects were collected,
     *     remember?) and gets the portal and prints it.  The
     *     <a href="http://www.timesys.com/">RTSJ reference implementation
     *     from TimeSys</a> prints out whatever happened to be allocated
     *     at the same place in memory as the old portal.  That is, if it
     *     hasn't segfaulted yet.  (Which it has.)
     * <li>It attempts to set the portal to an interned string (illegal
     *     according to the <a href="http://www.rtj.org/">RTSJ</a>.
     * <li>It attempts to set the portal to an appropriately-allocated string
     *     (one in the memory area).  It then gets and prints this portal.
     * <li>It attempts to set the portal to <i>null</i>.  By the
     *     <a href="http://www.rtj.org/">RTSJ</a>, the portal should remain
     *     unchanged.  It gets this portal to show that it hasn't been reset.
     * <li>It creates and enters another (nested) 10-kilobyte
     *     {@link javax.realtime.LTMemory LTMemory} scoped memory area.
     * <li>It attempts to set the outer memory area's portal to point to an
     *     object allocated in the inner memory area.
     * <li>It gets and prints the outer memory area's portal.
     * <li>It exits both memory areas.
     * </ul> */
    public void run() {
        final ScopedMemory mem = new LTMemory(MEMSIZE, MEMSIZE);
        System.out.println("created scoped memory area: "+mem);
        System.out.println(">>  entering memory area");
        Runnable logic1 = new Runnable() {
                public void run() {
                    String foo = new String("foo");
                    System.out.println("    allocated string 'foo'");
                    System.out.println("    foo is "+ptr(foo));
                    System.out.println("    attempting setPortal(foo)...");
                    try {
                        mem.setPortal(foo);
                    } catch(Throwable t) {
                        except(t, "setPortal");
                    }
                    System.out.println("    attempting getPortal()...");
                    try {
                        Object o = mem.getPortal();
                        System.out.println("    getPortal() == "+ptr(o));
                        System.out.println("    portal interpreted as '"+o+'\'');
                    } catch(Throwable t) {
                        except(t, "getPortal");
                    }
                }
            };
        mem.enter(logic1);
        System.out.println("<<  left memory area");
        System.out.println("attempting to get portal from outside memory area...");
        try {
            Object o = mem.getPortal();
            // This next line segfaults the TimeSys reference implementation
            // (specifically, the reference implementation doesn't clear the
            // portal, yet the portal object has gone away since the scope
            // was exited.  So, System.identityHashCode() is doing something
            // weird with a weird pointer to a non-existent
            // object... perhaps portals are stored as offsets from the base
            // of the memory area, instead of actual pointers?
            System.out.println("getPortal() == "+ptr(o));
        } catch(Throwable t) {
            except(t, "getPortal");
        }
        
        System.out.println(">>  re-entering memory area");

        Runnable logic2 = new Runnable() {
                public void run() {
                                        
                    System.out.println("    attempting getPortal()...");
                    try {
                        Object o = mem.getPortal();
                        System.out.println("    getPortal() == "+ptr(o));
                        System.out.println("    portal interpreted as '"+o+'\'');
                    } catch(Throwable t) {
                        except(t, "getPortal");
                    }
                    System.out.println("    attempting to set the portal to an interned string...");
                    try {
                        mem.setPortal("x");
                    } catch(Throwable t) {
                        except(t, "setPortal");
                    }
                    String x = new String("x");
                    System.out.println("    attempting to set the portal to a properly-allocated string 'x' ("+ptr(x)+")...");
                    try {
                        mem.setPortal(x);
                    } catch(Throwable t) {
                        except(t, "setPortal");
                    }
                    System.out.println("    attempting getPortal()...");
                    try {
                        Object o = mem.getPortal();
                        System.out.println("    getPortal() == "+ptr(o));
                        System.out.println("    portal interpreted as '"+o+'\'');
                    } catch(Throwable t) {
                        except(t, "getPortal");
                    }
                    System.out.println("    attempting to set the portal to null (it should remain unchanged)...");
                    try {
                        mem.setPortal(null);
                    } catch(Throwable t) {
                        except(t, "setPortal");
                    }
                    System.out.println("    attempting getPortal()...");
                    try {
                        Object o = mem.getPortal();
                        System.out.println("    getPortal() == "+ptr(o));
                        System.out.println("    portal interpreted as '"+o+'\'');
                    } catch(Throwable t) {
                        except(t, "getPortal");
                    }

                    LTMemory mem2 = new LTMemory(25000, 25000);
                    System.out.println("    created another scoped memory area: "+mem2);
		    System.out.println("    "+ptr(mem2));
                    System.out.println("    >>  entering memory area");

                    Runnable logic = new Runnable() {
                            public void run() {
                                String bar = new String("bar");
                                System.out.println("        allocated string 'bar' in inner memory area -- "+ptr(bar));
                                System.out.println("        attempting to set outer portal to inner 'bar' object...");
                             
                                try {
                                    mem.setPortal(bar);
                                } catch(Throwable t) {
                                    except(t, "setPortal");
                                }
                                System.out.println("        attempting to get outer portal...");
                                try {
                                    Object o = mem.getPortal();
                                    System.out.println("        getPortal() == "+ptr(o));
                                    System.out.println("        portal interpreted as '"+o+'\'');
                                } catch(Throwable t) {
                                    except(t, "getPortal");
                                }
                            }
                        };
                    mem2.enter(logic);
                    System.out.println("    <<  left memory area");
                }
            };
        Runnable logic3 = new Runnable() {
                public void run() {
                    System.out.println("Hello From Logic 3!!!");
                }
            };
        mem.enter(logic2);
        System.out.println("<<  left memory area");
    }

    private static String ptr(Object o) {
        return "0x"+Integer.toHexString(System.identityHashCode(o));
        //return "" ; //o.toString();
    }

    private void except(Throwable t, String context) {
        System.out.println("################################################################");
        System.out.println("##  got an exception during "+context+"():");
        if(traces) t.printStackTrace();
        else System.out.println(t);
        System.out.println("################################################################");
    }
}
