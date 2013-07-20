// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_SignatureSpi__
#define __java_security_SignatureSpi__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class SignatureSpi;
      namespace spec
      {
        class AlgorithmParameterSpec;
      }
      class PrivateKey;
      class PublicKey;
      class SecureRandom;
    }
  }
};

class ::java::security::SignatureSpi : public ::java::lang::Object
{
public:
  SignatureSpi ();
public:  // actually protected
  virtual void engineInitVerify (::java::security::PublicKey *) = 0;
  virtual void engineInitSign (::java::security::PrivateKey *) = 0;
  virtual void engineInitSign (::java::security::PrivateKey *, ::java::security::SecureRandom *);
  virtual void engineUpdate (jbyte) = 0;
  virtual void engineUpdate (jbyteArray, jint, jint) = 0;
  virtual jbyteArray engineSign () = 0;
  virtual jint engineSign (jbyteArray, jint, jint);
  virtual jboolean engineVerify (jbyteArray) = 0;
  virtual void engineSetParameter (::java::lang::String *, ::java::lang::Object *) = 0;
  virtual void engineSetParameter (::java::security::spec::AlgorithmParameterSpec *);
  virtual ::java::lang::Object *engineGetParameter (::java::lang::String *) = 0;
public:
  virtual ::java::lang::Object *clone ();
public:  // actually protected
  ::java::security::SecureRandom * __attribute__((aligned(__alignof__( ::java::lang::Object )))) appRandom;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_SignatureSpi__ */