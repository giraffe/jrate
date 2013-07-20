// ************************************************************************
//    $Id: ObjectInitializer.h 429 2004-09-15 20:32:02Z corsaro $
// ************************************************************************
//
//                                jRate
//
//               Copyright (C) 2001-2004 by Angelo Corsaro.
//                         <corsaro@cse.wustl.edu>
//                          All Rights Reserved.
//
//   Permission to use, copy, modify, and distribute this software and
//   its  documentation for any purpose is hereby  granted without fee,
//   provided that the above copyright notice appear in all copies and
//   that both that copyright notice and this permission notice appear
//   in  supporting  documentation. I don't make  any  representations
//   about the  suitability  of this  software for any  purpose. It is
//   provided "as is" without express or implied warranty.
//
//
// *************************************************************************
//
// *************************************************************************
#ifndef JRATE_BINDING_JAVA_OBJET_INITIALIZER_H_
#define JRATE_BINDING_JAVA_OBJET_INITIALIZER_H_

#include <java/lang/Class.h>

namespace jrate { namespace binding { namespace java {

template <typename MemoryArea>
class ObjectInitializer {
public:
    ObjectInitializer(MemoryArea* ma = 0) : ma_(ma) { }
    ~ObjectInitializer() { }

public:
    inline void setupObject(::java::lang::Object* obj,
                            ::java::lang::Class* klass) {
        *((_Jv_VTable **)obj) = klass->vtable;
        obj->memory_area = (::java::lang::Object*)this->ma_;
    }
private:
    MemoryArea* ma_;
};

} /* jrate */ } /* binding */ } /* java */


#endif // JRATE_BINDING_JAVA_OBJET_INITIALIZER_H_
