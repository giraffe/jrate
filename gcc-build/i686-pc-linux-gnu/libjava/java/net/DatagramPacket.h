// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_DatagramPacket__
#define __java_net_DatagramPacket__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class DatagramPacket;
      class SocketAddress;
      class InetAddress;
    }
  }
};

class ::java::net::DatagramPacket : public ::java::lang::Object
{
public:
  DatagramPacket (jbyteArray, jint, jint);
  DatagramPacket (jbyteArray, jint);
  DatagramPacket (jbyteArray, jint, jint, ::java::net::InetAddress *, jint);
  DatagramPacket (jbyteArray, jint, ::java::net::InetAddress *, jint);
  DatagramPacket (jbyteArray, jint, jint, ::java::net::SocketAddress *);
  DatagramPacket (jbyteArray, jint, ::java::net::SocketAddress *);
  ::java::net::InetAddress *getAddress ();
  jint getPort ();
  jbyteArray getData ();
  jint getOffset ();
  jint getLength ();
  void setAddress (::java::net::InetAddress *);
  void setPort (jint);
  void setSocketAddress (::java::net::SocketAddress *);
  ::java::net::SocketAddress *getSocketAddress ();
  void setData (jbyteArray);
  void setData (jbyteArray, jint, jint);
  void setLength (jint);
private:
  jbyteArray __attribute__((aligned(__alignof__( ::java::lang::Object ))))  buffer;
  jint offset;
  jint length;
  ::java::net::InetAddress *address;
  jint port;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_net_DatagramPacket__ */