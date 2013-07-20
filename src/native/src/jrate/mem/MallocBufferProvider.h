// ************************************************************************
//    $Id: MallocBufferProvider.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_MEM_MALLOC_BUFFER_PROVIDER_H_
#define _JRATE_MEM_MALLOC_BUFFER_PROVIDER_H_

#include <stdlib.h>

#if !defined (_JRATE_MEM_BUFFER_PROVIDER_H_)
#   error "Don't include this file directly, instead, include BufferProvider.h."
#endif // defined (_JRATE_MEM_BUFFER_PROVIDER_H_)

namespace jrate { namespace mem {

template <typename MemLokingPolicy, int ALIGNMENT>
class MallocBufferProvider;

template <typename MemLokingPolicy, int ALIGNMENT>
class MallocBufferProvider {
private:
    MallocBufferProvider()
        : releaseCommand_(*this) { }

public:
    ~MallocBufferProvider() { }

public:
    static MallocBufferProvider& instance() {
        static MallocBufferProvider* theInstance = new MallocBufferProvider;
        return *theInstance;
    }

public:
   /**
    * Allocates a buffer of the given size whose initial address is
    * aligned to <code>alignment</code>.
    *
    * @param buffer the buffer which will hold the
    */
   jrate::mem::Buffer getBuffer(int size)
   {
      // Ensure that the alignment has a proper value.

//       Static_Ensure(ALIGNMENT <= jrate::sys::CurrentPlatformTraits_t::MALLOC_ALIGNEMT,
//                     OutOfBound_Alignement_Value);
      
      char* buf = (char*)malloc(size);

      if (buf == 0) {
         jrate::mem::Buffer buffer(0, 0, false, 0);
         return buffer;
      }

      jrate::mem::Buffer buffer(buf, size, true, &this->releaseCommand_);
      MemLokingPolicy::lockMemory(buffer);
      buffer.isClean() = true;
      return buffer;
   }

   /**
    * Releases a buffer previously allocated.
    */
   bool releaseBuffer(jrate::mem::Buffer& buffer)
   {
      size_t ID =
         (size_t)&this->releaseCommand_;

      if (buffer.handle() != 0 && buffer.allocatorID() == ID) {
         MemLokingPolicy::unlockMemory(buffer);
         free(buffer.handle());
         return true;
      }
      return false;

   }
private:
   jrate::mem::ReleaseCommand<MallocBufferProvider> releaseCommand_;
};

} /* jrate */ } /* mem */

#endif // _JRATE_MEM_MALLOC_BUFFER_PROVIDER_H_
