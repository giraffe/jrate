// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_runtime_VMClassLoader__
#define __gnu_gcj_runtime_VMClassLoader__

#pragma interface

#include <java/net/URLClassLoader.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class URL;
    }
  }
  namespace gnu
  {
    namespace gcj
    {
      namespace runtime
      {
        class VMClassLoader;
      }
    }
  }
};

class ::gnu::gcj::runtime::VMClassLoader : public ::java::net::URLClassLoader
{
private:
  VMClassLoader ();
  static JArray< ::java::net::URL *> *init ();
public:  // actually protected
  ::java::lang::Class *findClass (::java::lang::String *);
public:
  static ::gnu::gcj::runtime::VMClassLoader *instance;
  friend class ::java::lang::ClassLoader;

  static ::java::lang::Class class$;
};

#endif /* __gnu_gcj_runtime_VMClassLoader__ */
