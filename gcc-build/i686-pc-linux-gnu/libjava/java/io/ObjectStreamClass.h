// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_ObjectStreamClass__
#define __java_io_ObjectStreamClass__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace io
      {
        class NullOutputStream;
      }
    }
  }
};

class ::java::io::ObjectStreamClass : public ::java::lang::Object
{
public:
  static ::java::io::ObjectStreamClass *lookup (::java::lang::Class *);
public: // actually package-private
  static ::java::io::ObjectStreamClass *lookupForClassObject (::java::lang::Class *);
public:
  virtual ::java::lang::String *getName () { return name; }
  virtual ::java::lang::Class *forClass () { return clazz; }
  virtual jlong getSerialVersionUID () { return uid; }
  virtual JArray< ::java::io::ObjectStreamField *> *getFields ();
  virtual ::java::io::ObjectStreamField *getField (::java::lang::String *);
  virtual ::java::lang::String *toString ();
public: // actually package-private
  virtual jboolean hasWriteMethod ();
  virtual jboolean hasReadMethod ();
  virtual jboolean isSerializable ();
  virtual jboolean isExternalizable ();
  virtual ::java::io::ObjectStreamClass *getSuper () { return superClass; }
  static JArray< ::java::io::ObjectStreamClass *> *getObjectStreamClasses (::java::lang::Class *);
  virtual jint getFlags () { return flags; }
  ObjectStreamClass (::java::lang::String *, jlong, jbyte, JArray< ::java::io::ObjectStreamField *> *);
  virtual void setClass (::java::lang::Class *);
  virtual void setSuperclass (::java::io::ObjectStreamClass *);
  virtual void calculateOffsets ();
private:
  ObjectStreamClass (::java::lang::Class *);
  void setFlags (::java::lang::Class *);
  void setFields (::java::lang::Class *);
  jlong getClassUID (::java::lang::Class *);
  JArray< ::java::io::ObjectStreamField *> *getSerialPersistentFields (::java::lang::Class *);
public:
  static JArray< ::java::io::ObjectStreamField *> *NO_FIELDS;
private:
  static ::java::util::Hashtable *classLookupTable;
  static ::gnu::java::io::NullOutputStream *nullOutputStream;
  static ::java::util::Comparator *interfaceComparator;
  static ::java::util::Comparator *memberComparator;
  static JArray< ::java::lang::Class *> *writeMethodArgTypes;
  ::java::io::ObjectStreamClass * __attribute__((aligned(__alignof__( ::java::lang::Object )))) superClass;
  ::java::lang::Class *clazz;
  ::java::lang::String *name;
  jlong uid;
  jbyte flags;
public: // actually package-private
  JArray< ::java::io::ObjectStreamField *> *fields;
  jint primFieldSize;
  jint objectFieldCount;
  jboolean isProxyClass;
private:
  static const jlong serialVersionUID = -6120832682080437368LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_io_ObjectStreamClass__ */