// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_text_CollationElementIterator__
#define __java_text_CollationElementIterator__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace text
    {
      class CollationElementIterator;
      class RuleBasedCollator;
    }
  }
};

class ::java::text::CollationElementIterator : public ::java::lang::Object
{
public:
  jint next ();
  static jint primaryOrder (jint);
  void reset ();
  static jshort secondaryOrder (jint);
  static jshort tertiaryOrder (jint);
public: // actually package-private
  CollationElementIterator (::java::lang::String *, ::java::text::RuleBasedCollator *);
public:
  static const jint NULLORDER = -1L;
public: // actually package-private
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) text;
  jint index;
  jboolean lookahead_set;
  jint lookahead;
  ::java::text::RuleBasedCollator *collator;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_text_CollationElementIterator__ */
