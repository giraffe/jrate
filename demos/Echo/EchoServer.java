// ************************************************************************
//    $Id: EchoServer.java 383 2003-09-23 00:52:32Z corsaro $
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
import java.net.*;
import java.io.*;

public class EchoServer {

    private Socket       socket;
    private InputStream  istream;
    private OutputStream ostream;
    private MemoryArea   ma = new CTMemory(1024 * 1024, 1024 * 1024);
    private ServerLogic  serverLogic = new ServerLogic();
    private boolean      isRunning = true;
    
    class ServerLogic implements Runnable {
        public void run() {
            try {
                byte[] msg = new byte[1024];
                System.out.println(">> [Server]: Waiting for a message");
                int byteno = EchoServer.this.istream.read(msg);
                int i = 0;
                int j = byteno - 1;
                while (i < j) {
                    byte tmp = msg[i];
                    msg[i] = msg[j];
                    msg[j] = tmp;
                    ++i;
                    --j;
                }
                EchoServer.this.ostream.write(msg);
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
    
    public EchoServer(Socket socket) throws IOException {
        this.socket = socket; 
        this.istream = socket.getInputStream();
        this.ostream = socket.getOutputStream();
    }

    public void start() {
        
        while (isRunning) {
            this.ma.enter(this.serverLogic);
        }
    }

    public synchronized void stop() {
        try {
            this.socket.shutdownInput(); 
            this.socket.close();
        } catch (IOException e) {
            e.printStackTrace();
        } 
        this.isRunning = false;
    }

    public static void main(String[] args) throws Exception {
                
        Runnable acceptorLogic = new Runnable() {

                public void run() {
                    try {
                        final ServerSocket serverSocket = new ServerSocket(5555);
                        final char[] synch = new char[0];
                        
                        Runnable serverLogic = new Runnable() {
                                public void run() {
                                    try {
                                        System.out.println(">> [Server]: Waiting for a connection");
                                        Socket socket = serverSocket.accept();
                                        synchronized (synch) {
                                            synch.notify();
                                        }
                                        EchoServer server = new EchoServer(socket);
                                        server.start();
                                    } catch (IOException e) {
                                        e.printStackTrace();
                                    }
                                }
                            };
                        
                        while (true) {
                            try {
                                RealtimeThread thread =
                                    new RealtimeThread(null,
                                                       null,
                                                       null,
                                                       new CTMemory(16 * 1024, 1 * 1024),
                                                       null,
                                                       serverLogic);
                                thread.start();
                                synchronized(synch) {
                                    synch.wait();
                                }
                                
                            } catch (InterruptedException e) {
                                e.printStackTrace();
                            }
                            
                        }
                } catch (IOException e) {
                        e.printStackTrace();
                    }
                }
            };
        
        RealtimeThread mainThread = new RealtimeThread(null,
                                                       null,
                                                       null,
                                                       null,
                                                       null,
                                                       acceptorLogic);
                mainThread.start();
    }
}
