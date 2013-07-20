// ************************************************************************
//    $Id: EventHandlingDemo.java 416 2004-02-22 18:35:45Z corsaro $
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
import java.util.Vector;


public class EventHandlingDemo {

    static private MemoryArea memoryAreaFactory(int type, int size) {
        if (type == 0)
            return new CTMemory(size, size);
        else
            return new LTMemory(size, size);
    }
    
    class  MainLogic implements Runnable {
        
        protected int fireCount;
        protected String handlerType;
        
        public MainLogic(int fireCount, String handlerType) {
            this.fireCount = fireCount;
            this.handlerType = handlerType;
        }
        
        public void run() {
            final Vector data = new Vector(fireCount);
            AsyncEvent event = new AsyncEvent();
            final HighResolutionTimer timer = new HighResolutionTimer();
            
            Runnable handlerLogic = new Runnable() {
                    public boolean done = false;
                    private int eventNum = 0;
                    AbsoluteTime stopTime = new AbsoluteTime(); 
                    public void run() {
                        timer.stop();
                        data.addElement(timer.getElapsedTime());
                    }
                };
            AsyncEventHandler handler = null;
            boolean boundHandler = false;
            if (handlerType.equals("bound")) {
                handler =
                    new BoundAsyncEventHandler(new PriorityParameters(15),
                                               null,
                                               null,
                                               null,
                                               null,
                                               handlerLogic);
                ((BoundAsyncEventHandler)handler).activate();
                boundHandler = true;
            }
            else {
                handler =
                    new ThreadedAsyncEventHandler(new PriorityParameters(15),
                                                  null,
                                                  null,
                                                  null,
                                                  null,
                                                  handlerLogic);
            
            }
        
            event.addHandler(handler);
            for (int i = 1; i < fireCount; ++i) {
                timer.start();
                event.fire();
                try {
                    Thread.sleep(1);
                } catch (InterruptedException e) { } 
            }

            try {
                Thread.sleep(600);
            } catch (InterruptedException e) { }
            
            for (int i = 0; i < data.size(); i++)
                System.out.println((RelativeTime)data.elementAt(i));

            if (boundHandler) 
                ((BoundAsyncEventHandler)handler).deactivate();
        }
    }
                    
    public static void main(String[] args) {
        if (args.length < 4) {
            System.out.println("You should pass the Memory Size, fire count, HandlerType,\nand Memory Type [0:CTMemory, 1:LTMemory] as a command line argument!");
            System.exit(-1);
        }
            
        final int memAreaSize = Integer.parseInt(args[0]);
        final int fireCount = Integer.parseInt(args[1]);
        final String handlerType = args[2];
        final int memType = Integer.parseInt(args[3]);
        Runnable starterLogic = new Runnable() {
                public void run() {
                    MemoryArea memoryArea = EventHandlingDemo.memoryAreaFactory(memType, memAreaSize);
                    MainLogic logic = new MainLogic(fireCount, handlerType);
                    memoryArea.enter(logic);
                }
            };

        RealtimeThread rtThread = new RealtimeThread(starterLogic);
        rtThread.start();
    }
}


