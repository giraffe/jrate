// ************************************************************************
//    $Id: ScopedMemoryCycle.java 299 2003-05-17 04:26:55Z corsaro $
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

public class ScopedMemoryCycle {

    static private MemoryArea memoryAreaFactory(int type, int size) {
        if (type == 0)
            return new CTMemory(size, size);
        else
            return new LTMemory(size, size);
    }

    static private void printUsageMessage() {
        System.out.println("Usage: scopedMemoryCyle <memory-type [0:CTMemory, 1:LTMemory]>");
        System.exit(-1);
    }
    
    public static void main(String[] args) {

        if (args.length < 1)
            ScopedMemoryCycle.printUsageMessage();
        
        final int memType = Integer.parseInt(args[0]);
        if (memType != 0 && memType != 1)
            ScopedMemoryCycle.printUsageMessage();
        
        System.out.println("[Main]");
        System.out.flush();
        Runnable logic = new Runnable() {
                public void run() {
                    System.out.println("\t[New Thread]");
                    System.out.flush();
                    final MemoryArea memoryArea = ScopedMemoryCycle.memoryAreaFactory(memType, 1024 * 1024); // 1 KB
                    Runnable wellBehavedNestedLogic = new Runnable() {
                            public void run() {
                                String cat = "";
                                for (int i = 0; i < 10; i++) {
                                    cat  = cat +  new String("\t\t\t0123456789\n") ;
                                }
                                System.out.println(cat);
                                System.out.println("\t\t[Obj Mem Area]: "
                                                   + MemoryArea.getMemoryArea(cat));
                                System.out.println("\t\t[Class Mem Area]: "
                                                   + MemoryArea.getMemoryArea(String.class));
                                System.out.println("\t\t[Used Memory]: "
                                                   + memoryArea.memoryConsumed());
                                System.out.println("\t\t[Remaining Memory]: "
                                                   + memoryArea.memoryRemaining());
                                System.out.println("\t[Exiting Memory Area]");

                            }
                        };
                    System.out.println("\t[Entering Memory Area]");
                    memoryArea.enter(wellBehavedNestedLogic);

                    Runnable badlyBehavedNestedLogic = new Runnable() {
                            public void run() {
                                Runnable wellBehavedNestedLogic = new Runnable() {
                                        public void run() {
                                            String cat = "";
                                            for (int i = 0; i < 10; i++) {
                                                cat  = cat +  new String("\t\t\t0123456789\n") ;
                                            }
                                            System.out.println(cat);
                                            System.out.println("\t\t[Obj Mem Area]: "
                                                               + MemoryArea.getMemoryArea(cat));
                                            System.out.println("\t\t[Class Mem Area]: "
                                                               + MemoryArea.getMemoryArea(String.class));
                                            System.out.println("\t\t[Used Memory]: "
                                                               + memoryArea.memoryConsumed());
                                            System.out.println("\t\t[Remaining Memory]: "
                                                               + memoryArea.memoryRemaining());
                                            System.out.println("\t[Exiting Memory Area]"); 
                                        }
                                    };

                                // Here we try to enter again the ScopedMemory we are in thus creating a cycle.
                                // This will throw a ScopedCycleException
                                memoryArea.enter(wellBehavedNestedLogic);
                            }
                        };
                    System.out.println("\t[Entering Bad Memory Area]");
                    memoryArea.enter(badlyBehavedNestedLogic);
                }
            };
        
        RealtimeThread rtThread = new RealtimeThread(logic);
        System.out.println("[Starting Thread]");
        System.out.flush();
        rtThread.start();
        
        try {
            rtThread.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        rtThread = null;
        System.out.println("[End Main]");
    }
}
