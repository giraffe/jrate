// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_text_RuleBasedCollator__
#define __java_text_RuleBasedCollator__

#pragma interface

#include <java/text/Collator.h>

extern "Java"
{
  namespace java
  {
    namespace text
    {
      class RuleBasedCollator;
      class CollationKey;
      class CharacterIterator;
      class CollationElementIterator;
    }
  }
};

class ::java::text::RuleBasedCollator : public ::java::text::Collator
{
public:
  virtual ::java::lang::Object *clone ();
public: // actually package-private
  virtual jint ceiNext (::java::text::CollationElementIterator *);
  static jint next (::java::text::CollationElementIterator *, jint);
public:
  virtual jint compare (::java::lang::String *, ::java::lang::String *);
  virtual jboolean equals (::java::lang::Object *);
  virtual ::java::text::CollationElementIterator *getCollationElementIterator (::java::lang::String *);
  virtual ::java::text::CollationElementIterator *getCollationElementIterator (::java::text::CharacterIterator *);
  virtual ::java::text::CollationKey *getCollationKey (::java::lang::String *);
  virtual ::java::lang::String *getRules () { return rules; }
  virtual jint hashCode ();
private:
  jboolean is_special (jchar);
  jint text_argument (::java::lang::String *, jint, ::java::lang::StringBuffer *);
public:
  RuleBasedCollator (::java::lang::String *);
private:
  jboolean __attribute__((aligned(__alignof__( ::java::text::Collator ))))  frenchAccents;
  ::java::lang::String *rules;
  ::java::util::Hashtable *map;
  ::java::util::Hashtable *prefixes;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_text_RuleBasedCollator__ */