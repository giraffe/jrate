// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_interfaces_DSAPrivateKey__
#define __java_security_interfaces_DSAPrivateKey__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace interfaces
      {
        class DSAPrivateKey;
      }
    }
    namespace math
    {
      class BigInteger;
    }
  }
};

class ::java::security::interfaces::DSAPrivateKey : public ::java::lang::Object
{
public:
  virtual ::java::math::BigInteger *getX () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_security_interfaces_DSAPrivateKey__ */