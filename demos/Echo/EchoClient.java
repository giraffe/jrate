// ************************************************************************
//    $Id: EchoClient.java 383 2003-09-23 00:52:32Z corsaro $
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

public class EchoClient {

    public static void main(String[] args) throws IOException {
        InetAddress addr = InetAddress.getByName("localhost");
        System.out.println("LocalHost: " + addr);

        Socket socket = new Socket(addr, 5555);
        OutputStream ostream = socket.getOutputStream();
        InputStream istream = socket.getInputStream();
        while (true) {
            try {
                byte[] msgSent = new byte[1024];
                System.out.print(">> [Message]: ");
                System.in.read(msgSent);
                ostream.write(msgSent);
                byte[] msgRcv = new byte[1024]; 
                istream.read(msgRcv);
                System.out.println(">> [Answer]: " + new String(msgRcv)); 
            } catch (IOException e){
                e.printStackTrace();
            }
        }
    }
}
