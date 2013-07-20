// ************************************************************************
//    $Id: ExecuteInAreaDemo.java 376 2003-07-14 00:59:03Z corsaro $
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



public class ExecuteInAreaDemo {

    class ExecuteInAreaLogic implements Runnable {
        public void run() {
            String str = new String(); 
            System.out.println(">> Current MemoryArea: "
                               + MemoryArea.getMemoryArea(str));
            for (int i = 0; i < 10; ++i)
                System.out.println("\t[" + i + "]");
        }
        
    }

    class DemoLogic implements Runnable {
        private int fork;
        private int index;
        private int level;
        
        public DemoLogic(int fork, int index, int level) {
            this.fork = fork;
            this.index = index;
            this.level = level;
        }
        
        public void run() {
            if (this.fork != 0) {
                DemoLogic childLogic = new DemoLogic(this.fork - 1, this.index, this.level -1);
                LTMemory ma = new LTMemory(64*1024, 64*1024);
                System.out.println(">> Depth " + this.level + " :: " + ma);
                ma.enter(childLogic);
            }
            else {
                RealtimeThread rtThread = RealtimeThread.currentRealtimeThread();
                MemoryArea ma = rtThread.getOuterMemoryArea(this.index);
                System.out.println(">> " + this.index);
                System.out.println(">> Entering Depth "
                                   + (this.level + this.index + 1) 
                                   + "::" + ma);
                if (ma == null) {
                    System.out.println(">> INVALID DEPTH VALUE");
                    return;
                }
                ma.executeInArea(eiaLogic);
                System.out.println(">> Leaving Depth "
                                   + (this.level + this.index + 1)
                                   + "::" + ma);
                String str = new String(); 
                System.out.println(">> Current MemoryArea: "
                                   + MemoryArea.getMemoryArea(str));
                
            }
        }
    }

    ExecuteInAreaLogic eiaLogic = new ExecuteInAreaLogic();
    
    public void runDemo(int index, int depth) {
        DemoLogic demoLogic = new DemoLogic(depth,  index, depth-1);
        RealtimeThread rtThread = new RealtimeThread(demoLogic);
        rtThread.start();
    }
    
    public static void main(String[] args) {
        if (args.length < 2) {
            System.out.println("\nUSAGE:\n\texecuteInAreaDemo <index> <depth>");
            System.exit(-1);
        }

        int index = Integer.parseInt(args[0]);
        int depth = Integer.parseInt(args[1]);
            
        ExecuteInAreaDemo demo = new ExecuteInAreaDemo();
        demo.runDemo(index, depth);
    }
}

