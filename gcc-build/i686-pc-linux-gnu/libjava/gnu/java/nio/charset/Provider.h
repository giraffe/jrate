// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_nio_charset_Provider__
#define __gnu_java_nio_charset_Provider__

#pragma interface

#include <java/nio/charset/spi/CharsetProvider.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      namespace charset
      {
        class Charset;
      }
    }
  }
  namespace gnu
  {
    namespace java
    {
      namespace nio
      {
        namespace charset
        {
          class Provider;
        }
      }
    }
  }
};

class ::gnu::java::nio::charset::Provider : public ::java::nio::charset::spi::CharsetProvider
{
private:
  Provider ();
public:
  ::java::util::Iterator *charsets ();
  ::java::nio::charset::Charset *charsetForName (::java::lang::String *);
private:
  ::java::lang::Object *canonicalize (::java::lang::String *);
  void addCharset (::java::nio::charset::Charset *);
public:
  static ::gnu::java::nio::charset::Provider *provider ();
private:
  static ::gnu::java::nio::charset::Provider *singleton;
  ::java::util::HashMap * __attribute__((aligned(__alignof__( ::java::nio::charset::spi::CharsetProvider )))) canonicalNames;
  ::java::util::HashMap *charsets__;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_nio_charset_Provider__ */