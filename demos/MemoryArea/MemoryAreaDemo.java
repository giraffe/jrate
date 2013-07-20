// ************************************************************************
//    $Id: MemoryAreaDemo.java 416 2004-02-22 18:35:45Z corsaro $
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
 * This class provides a basic tests which shows how to use the Scoped
 * Memory feature provide by the RTSJ.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class MemoryAreaDemo {

    static private MemoryArea memoryAreaFactory(int type, int size) {
        switch (type) {
        case 0:
            return new CTMemory(size, size);
        case 1:
            return new CTPrivateMemory(size, size);
        case 2:
            return new LTMemory(size, size);
        case 3:
            return new LTPrivateMemory(size, size);
        case 4:
            return new VTMemory(size, size);
        case 5:
            return HeapMemory.instance();
        case 6:
            return ImmortalMemory.instance();
        case 7:
            return ArenaFactory.createRefCountedArena(size);
        default:
            return null;
        }
    }
    
    static private void printUsageMessage() {
        System.out.println("Usage: memoryDemo <memory-type "
                           + "[0:CTMemory, 1: CTPrivateMemory, 2:LTMemory, 3:LTMemory, 4:VTMemory, "
                           + "5:HeapMemory, 6:ImmortalMemory, 7:Arena]>");
        System.exit(-1);
    }
    
    public static void main(String[] args) {
        System.out.println("Method Memory Area Size: " + MethodAreaMemory.instance().size()); 
        System.out.println("Heap Memory Area Size: " + HeapMemory.instance().size());
        ImmortalMemory im = ImmortalMemory.instance();
        System.out.println("Immortal Memory Area Size: " + im.size());
        
        if (args.length < 1)
            MemoryAreaDemo.printUsageMessage();
        
        final int memType = Integer.parseInt(args[0]);
        if (memType < 0 || memType > 7)
            MemoryAreaDemo.printUsageMessage();
        
        System.out.println("[Main]");
        System.out.flush();
        Runnable logic = new Runnable() {
                public void run() {
                    System.out.println("\t[New Thread]");
                    System.out.flush();
                    final MemoryArea memoryArea =
                        MemoryAreaDemo.memoryAreaFactory(memType, 4 * 4096); 
                    Runnable nestedLogic = new Runnable() {
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
                    memoryArea.enter(nestedLogic);
                    nestedLogic.run();
                    nestedLogic = null;
                    System.out.println("\t[End New Thread]"); 
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
