/* -*- C++ -*- 
 * $Id: Buffer.cc 400 2003-10-24 23:01:48Z corsaro $
 **/
#include <jrate/mem/Buffer.h>


jrate::mem::IReleaseCommand::~IReleaseCommand() { }

jrate::mem::Buffer::Buffer(const jrate::mem::Buffer &other)  
{
   *this = other; 
}

jrate::mem::Buffer::~Buffer() { }

const jrate::mem::Buffer&
jrate::mem::Buffer::operator= (const jrate::mem::Buffer& rhs) {
    if (this != &rhs) {        
        this->handle_ = rhs.handle_;
        this->size_ = rhs.size_;
        this->releaseCommand_ = rhs.releaseCommand_;
        this->isClean_ = rhs.isClean_;
    }
    return *this;
}

jrate::mem::Buffer::Buffer(char* handle, size_t size, bool isClean, IReleaseCommand* releaseCommand)
   : handle_(handle), size_(size), releaseCommand_(releaseCommand), isClean_(isClean) { }


void
jrate::mem::Buffer::reset() {
   this->handle_ = 0;
   this->size_ = 0;
   this->releaseCommand_ = 0;
}

bool
jrate::mem::Buffer::release() {
   bool retVal = this->releaseCommand_->release(*this);
   this->reset();
   return retVal;
}
