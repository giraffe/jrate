// ************************************************************************
//    $Id: SimpleEventHandlingDemo.java 186 2002-07-14 00:30:49Z corsaro $
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


public class SimpleEventHandlingDemo {

    public static void main(String[] args) {
        int fireCount = 0;
        if (args.length >= 2)
            fireCount = Integer.parseInt(args[0]);
                    else {
            System.out.println("You should pass the fire count, and HandlerType as a command line argument!");
            System.exit(-1);
        }
        final Vector data = new Vector(fireCount);
        AsyncEvent event = new AsyncEvent();
        final HighResolutionTimer timer = new HighResolutionTimer();
        
        Runnable handlerLogic = new Runnable() {
                public boolean done = false;
                
                AbsoluteTime stopTime = new AbsoluteTime(); 
                public void run() {
                    timer.stop();
                    //System.out.println(timer.getElapsedTime());
                    data.addElement(timer.getElapsedTime());
                }
            };
        AsyncEventHandler handler = null;
        boolean boundHandler = false;
        
        if (args[1].equals("bound")) {
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
        Thread mainTread = Thread.currentThread();
        for (int i = 1; i < fireCount; ++i) {
            timer.start();
            event.fire();
            try {
                Thread.sleep(10);
            }
            catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        if (boundHandler) {
            ((BoundAsyncEventHandler)handler).deactivate();
        }

        for (int i = 0; i < data.size(); i++)
            System.out.println((RelativeTime)data.elementAt(i));
    }
}
