// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_cert_CertificateFactory__
#define __java_security_cert_CertificateFactory__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class Provider;
      namespace cert
      {
        class CertPath;
        class CRL;
        class Certificate;
        class CertificateFactory;
        class CertificateFactorySpi;
      }
    }
  }
};

class ::java::security::cert::CertificateFactory : public ::java::lang::Object
{
public:  // actually protected
  CertificateFactory (::java::security::cert::CertificateFactorySpi *, ::java::security::Provider *, ::java::lang::String *);
public:
  static ::java::security::cert::CertificateFactory *getInstance (::java::lang::String *);
  static ::java::security::cert::CertificateFactory *getInstance (::java::lang::String *, ::java::lang::String *);
private:
  static ::java::security::cert::CertificateFactory *getInstance (::java::lang::String *, ::java::lang::String *, ::java::security::Provider *);
public:
  ::java::security::Provider *getProvider () { return provider; }
  ::java::lang::String *getType () { return type; }
  ::java::security::cert::Certificate *generateCertificate (::java::io::InputStream *);
  ::java::util::Collection *generateCertificates (::java::io::InputStream *);
  ::java::security::cert::CRL *generateCRL (::java::io::InputStream *);
  ::java::util::Collection *generateCRLs (::java::io::InputStream *);
  ::java::security::cert::CertPath *generateCertPath (::java::io::InputStream *);
private:
  ::java::security::cert::CertificateFactorySpi * __attribute__((aligned(__alignof__( ::java::lang::Object )))) certFacSpi;
  ::java::security::Provider *provider;
  ::java::lang::String *type;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_cert_CertificateFactory__ */