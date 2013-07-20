// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_channels_ServerSocketChannel__
#define __java_nio_channels_ServerSocketChannel__

#pragma interface

#include <java/nio/channels/spi/AbstractSelectableChannel.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class ServerSocket;
    }
    namespace nio
    {
      namespace channels
      {
        class ServerSocketChannel;
        class SocketChannel;
        namespace spi
        {
          class SelectorProvider;
        }
      }
    }
  }
};

class ::java::nio::channels::ServerSocketChannel : public ::java::nio::channels::spi::AbstractSelectableChannel
{
public:
  ServerSocketChannel (::java::nio::channels::spi::SelectorProvider *);
  virtual ::java::nio::channels::SocketChannel *accept () = 0;
  virtual ::java::net::ServerSocket *socket () = 0;
  static ::java::nio::channels::ServerSocketChannel *open ();
  jint validOps ();

  static ::java::lang::Class class$;
};

#endif /* __java_nio_channels_ServerSocketChannel__ */