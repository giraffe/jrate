// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_RemoteException__
#define __java_rmi_RemoteException__

#pragma interface

#include <java/io/IOException.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      class RemoteException;
    }
  }
};

class ::java::rmi::RemoteException : public ::java::io::IOException
{
public:
  RemoteException ();
  RemoteException (::java::lang::String *);
  RemoteException (::java::lang::String *, ::java::lang::Throwable *);
  virtual ::java::lang::String *getMessage ();
  virtual ::java::lang::Throwable *getCause ();
private:
  static const jlong serialVersionUID = -5148567311918794206LL;
public:
  ::java::lang::Throwable * __attribute__((aligned(__alignof__( ::java::io::IOException )))) detail;

  static ::java::lang::Class class$;
};

#endif /* __java_rmi_RemoteException__ */