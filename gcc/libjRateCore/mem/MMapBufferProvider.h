// ************************************************************************
//    $Id: MMapBufferProvider.h 527 2005-04-01 21:28:33Z mdeters $
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
#ifndef _JRATE_MEM_MMAP_BUFFER_PROVIDER_H_
#define _JRATE_MEM_MMAP_BUFFER_PROVIDER_H_

#include <sys/mman.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <jrate/jRate.h>

#if !defined (_JRATE_MEM_BUFFER_PROVIDER_H_)
#   error "Don't include this file directly, instead, include BufferProvider.h."
#endif // defined (_JRATE_MEM_BUFFER_PROVIDER_H_)

namespace jrate { namespace mem {

template <typename MemLokingPolicy, size_t ALIGNMENT>
class MMapBufferProvider;


/**
 * This class provides buffers by using a given loking policy. The
 * loking policy has the responsibility of deciding how to lock
 * memory.
 */
template <typename MemLokingPolicy, size_t ALIGNMENT>
class MMapBufferProvider
{
protected:
    MMapBufferProvider()
        : releaseCommand_(*this) { }

public:
    ~MMapBufferProvider() { }

public:
    static MMapBufferProvider& instance() {
        static MMapBufferProvider theInstance;
        return theInstance;
    }
public:

    /**
     * Allocates a buffer of the given size whose initial address is
     * aligned to <code>alignment</code>.
     *
     * @param buffer the buffer which will hold the
     */
    jrate::mem::Buffer getBuffer(size_t size) {
        // Ensure that the alignment has a proper value.
//         Static_Ensure(ALIGNMENT
//                       <=
//                       jrate::sys::CurrentPlatformTraits_t::PAGE_SIZE_EXP,
//                       OutOfBound_Alignement_Value);

        // Notice that since this class already provides 4096 aligned
        // address there is nothing we have to do to provide smaller
        // aligned address.
        char* buf;
        size = roundToPageSize(size);
        int fd = open("/dev/zero", O_RDWR);
        buf = (char*)mmap(0,
                          size,
                          PROT_READ | PROT_WRITE,
                          MAP_PRIVATE,
                          fd,
                          0);
        close(fd);


        if (buf == 0) {
            munmap(buf, size);
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
    bool releaseBuffer(jrate::mem::Buffer& buffer) {
        size_t ID = (size_t)&this->releaseCommand_;

        if (buffer.handle() != 0 && buffer.allocatorID() == ID) {
            MemLokingPolicy::unlockMemory(buffer);
            munmap(buffer.handle(), buffer.size());
            return true;
        }
        return false;

    }

protected:
    int roundToPageSize(size_t size) {
        size_t k = size / JRATE_PAGE_SIZE;

        if (k * JRATE_PAGE_SIZE != size)
            size = (k+1) * JRATE_PAGE_SIZE;
        return size;
    }

protected:
    jrate::mem::ReleaseCommand<MMapBufferProvider> releaseCommand_;
};

} /* jrate */ } /* mem */

#endif // _JRATE_MEM_MMAP_BUFFER_PROVIDER_H_
