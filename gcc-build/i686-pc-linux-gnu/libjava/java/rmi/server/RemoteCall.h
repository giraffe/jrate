// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_server_RemoteCall__
#define __java_rmi_server_RemoteCall__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      namespace server
      {
        class RemoteCall;
      }
    }
  }
};

class ::java::rmi::server::RemoteCall : public ::java::lang::Object
{
public:
  virtual ::java::io::ObjectOutput *getOutputStream () = 0;
  virtual void releaseOutputStream () = 0;
  virtual ::java::io::ObjectInput *getInputStream () = 0;
  virtual void releaseInputStream () = 0;
  virtual ::java::io::ObjectOutput *getResultStream (jboolean) = 0;
  virtual void executeCall () = 0;
  virtual void done () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_rmi_server_RemoteCall__ */