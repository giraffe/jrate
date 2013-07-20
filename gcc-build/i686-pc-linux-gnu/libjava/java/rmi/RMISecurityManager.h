// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_RMISecurityManager__
#define __java_rmi_RMISecurityManager__

#pragma interface

#include <java/lang/SecurityManager.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      class RMISecurityManager;
    }
    namespace security
    {
      class Permission;
    }
    namespace net
    {
      class InetAddress;
    }
  }
};

class ::java::rmi::RMISecurityManager : public ::java::lang::SecurityManager
{
public:
  RMISecurityManager ();
  virtual void checkAccept (::java::lang::String *, jint) { }
  virtual void checkAccess (::java::lang::Thread *) { }
  virtual void checkAccess (::java::lang::ThreadGroup *) { }
  virtual void checkAwtEventQueueAccess () { }
  virtual void checkConnect (::java::lang::String *, jint) { }
  virtual void checkConnect (::java::lang::String *, jint, ::java::lang::Object *) { }
  virtual void checkCreateClassLoader () { }
  virtual void checkDelete (::java::lang::String *) { }
  virtual void checkExec (::java::lang::String *) { }
  virtual void checkExit (jint) { }
  virtual void checkLink (::java::lang::String *) { }
  virtual void checkListen (jint) { }
  virtual void checkMemberAccess (::java::lang::Class *, jint) { }
  virtual void checkMulticast (::java::net::InetAddress *) { }
  virtual void checkMulticast (::java::net::InetAddress *, jbyte) { }
  virtual void checkPackageAccess (::java::lang::String *) { }
  virtual void checkPackageDefinition (::java::lang::String *) { }
  virtual void checkPermission (::java::security::Permission *) { }
  virtual void checkPermission (::java::security::Permission *, ::java::lang::Object *) { }
  virtual void checkPrintJobAccess () { }
  virtual void checkPropertiesAccess () { }
  virtual void checkPropertyAccess (::java::lang::String *) { }
  virtual void checkRead (::java::io::FileDescriptor *) { }
  virtual void checkRead (::java::lang::String *) { }
  virtual void checkRead (::java::lang::String *, ::java::lang::Object *) { }
  virtual void checkSecurityAccess (::java::lang::String *) { }
  virtual void checkSetFactory () { }
  virtual void checkSystemClipboardAccess () { }
  virtual jboolean checkTopLevelWindow (::java::lang::Object *);
  virtual void checkWrite (::java::io::FileDescriptor *) { }
  virtual void checkWrite (::java::lang::String *) { }

  static ::java::lang::Class class$;
};

#endif /* __java_rmi_RMISecurityManager__ */