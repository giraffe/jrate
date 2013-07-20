// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_URI__
#define __java_net_URI__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class URL;
      class URI;
    }
  }
};

class ::java::net::URI : public ::java::lang::Object
{
private:
  void readObject (::java::io::ObjectInputStream *) { }
  void writeObject (::java::io::ObjectOutputStream *) { }
  void parseURI (::java::lang::String *) { }
public:
  URI (::java::lang::String *);
  URI (::java::lang::String *, ::java::lang::String *, ::java::lang::String *, jint, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  URI (::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  URI (::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  URI (::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  static ::java::net::URI *create (::java::lang::String *) { return 0; }
  ::java::net::URI *parseServerAuthority () { return 0; }
  ::java::net::URI *normalize () { return 0; }
  ::java::net::URI *resolve (::java::net::URI *) { return 0; }
  ::java::net::URI *resolve (::java::lang::String *) { return 0; }
  ::java::net::URI *relativize (::java::net::URI *) { return 0; }
  ::java::net::URL *toURL () { return 0; }
  ::java::lang::String *getScheme () { return scheme; }
  jboolean isAbsolute ();
  jboolean isOpaque ();
  ::java::lang::String *getRawSchemeSpecificPart () { return 0; }
  ::java::lang::String *getSchemeSpecificPart () { return 0; }
  ::java::lang::String *getRawAuthority () { return authority; }
  ::java::lang::String *getAuthority () { return 0; }
  ::java::lang::String *getRawUserInfo () { return userInfo; }
  ::java::lang::String *getUserInfo () { return 0; }
  ::java::lang::String *getHost () { return host; }
  jint getPort () { return port; }
  ::java::lang::String *getRawPath () { return path; }
  ::java::lang::String *getPath () { return 0; }
  ::java::lang::String *getRawQuery () { return query; }
  ::java::lang::String *getQuery () { return 0; }
  ::java::lang::String *getRawFragment () { return fragment; }
  ::java::lang::String *getFragment () { return 0; }
  jboolean equals (::java::lang::Object *);
  jint hashCode ();
  jint compareTo (::java::lang::Object *);
  ::java::lang::String *toString ();
  ::java::lang::String *toASCIIString ();
public: // actually package-private
  static const jlong serialVersionUID = -6052424284110960213LL;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) string;
private:
  ::java::lang::String *scheme;
  ::java::lang::String *schemeSpecificPart;
  ::java::lang::String *authority;
  ::java::lang::String *userInfo;
  ::java::lang::String *host;
  jint port;
  ::java::lang::String *path;
  ::java::lang::String *query;
  ::java::lang::String *fragment;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_net_URI__ */