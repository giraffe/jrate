// ************************************************************************
//    $Id: Buffer.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_MEM_BUFFER_H_
#define _JRATE_MEM_BUFFER_H_

#include <stdlib.h>

namespace jrate { namespace mem  {

class Buffer;
typedef Buffer Buffer_t;

template <typename MemLokingPolicy, size_t ALIGNMENT>
class MMapBufferProvider;

template <typename MemLokingPolicy, int ALIGNMENT>
class MallocBufferProvider;

class IReleaseCommand;
typedef IReleaseCommand IReleaseCommand_t;

template <class BufferProvider>
class ReleaseCommand;

class IReleaseCommand {
public:
    virtual ~IReleaseCommand();
    virtual bool release(jrate::mem::Buffer_t& buffer) = 0;
};

template <class BufferProvider>
class ReleaseCommand : public jrate::mem::IReleaseCommand_t {
public:
    ReleaseCommand(BufferProvider& bp)
        : bufferProvider_(bp) { }
    virtual ~ReleaseCommand() { }

public:
    virtual bool release(jrate::mem::Buffer_t& buffer) {
        return this->bufferProvider_.releaseBuffer(buffer);
    }

protected:
    BufferProvider& bufferProvider_;
};


class Buffer {
public:
    // -- Ctor/Dtor --
    Buffer(char* handle, size_t size, bool isClean, IReleaseCommand_t* releaseCommand);
    Buffer(const Buffer &other);
    ~Buffer();

public:
    // -- Overloaded Operators --
    const Buffer& operator=(const Buffer& rhs);
    inline char* operator[](size_t index);

public:
    // -- Accessors --
    inline char* handle() const;
    inline size_t size() const;

public:
    inline bool& isClean();
    inline void cleanup();
    inline void set(size_t startIndex, size_t endIndex, size_t value);

public:
    bool release();

private:
    void reset();

public:
    inline size_t allocatorID();

protected:
    char* handle_;
    size_t size_;
    IReleaseCommand_t* releaseCommand_;
    bool isClean_;
};

} /* jrate */ } /* mem */

#include <jrate/mem/Buffer.inl>
#endif // _JRATE_BUFFER_H_
