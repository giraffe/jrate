// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_text_ChoiceFormat__
#define __java_text_ChoiceFormat__

#pragma interface

#include <java/text/NumberFormat.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace text
    {
      class ChoiceFormat;
      class ParsePosition;
      class FieldPosition;
    }
  }
};

class ::java::text::ChoiceFormat : public ::java::text::NumberFormat
{
public:
  virtual void applyPattern (::java::lang::String *);
  ChoiceFormat (::java::lang::String *);
  ChoiceFormat (jdoubleArray, JArray< ::java::lang::String *> *);
  virtual jboolean equals (::java::lang::Object *);
  virtual ::java::lang::StringBuffer *format (jlong, ::java::lang::StringBuffer *, ::java::text::FieldPosition *);
  virtual ::java::lang::StringBuffer *format (jdouble, ::java::lang::StringBuffer *, ::java::text::FieldPosition *);
  virtual JArray< ::java::lang::Object *> *getFormats ();
  virtual jdoubleArray getLimits ();
  virtual jint hashCode ();
  static jdouble nextDouble (jdouble);
  static jdouble nextDouble (jdouble, jboolean);
  virtual ::java::lang::Number *parse (::java::lang::String *, ::java::text::ParsePosition *);
  static jdouble previousDouble (jdouble);
  virtual void setChoices (jdoubleArray, JArray< ::java::lang::String *> *);
private:
  void quoteString (::java::lang::StringBuffer *, ::java::lang::String *);
public:
  virtual ::java::lang::String *toPattern ();
private:
  JArray< ::java::lang::String *> * __attribute__((aligned(__alignof__( ::java::text::NumberFormat )))) choiceFormats;
  jdoubleArray choiceLimits;
  static const jint mantissaBits = 52L;
  static const jint exponentBits = 11L;
  static const jlong serialVersionUID = 1795184449645032964LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_text_ChoiceFormat__ */