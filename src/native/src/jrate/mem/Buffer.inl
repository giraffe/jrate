#include <string.h>

inline char*
jrate::mem::Buffer::handle() const {
  return this->handle_;
}

inline size_t
jrate::mem::Buffer::size() const {
  return this->size_;
}

inline size_t
jrate::mem::Buffer::allocatorID() {
  return (size_t)this->releaseCommand_;
}

inline char*
jrate::mem::Buffer::operator[](size_t index) {
   // Angelo 5 apr 2003> Should assert (index < size)
   return (this->handle_ + index);
}


inline bool&
jrate::mem::Buffer::isClean() {
   return this->isClean_;
}

inline void
jrate::mem::Buffer::cleanup() {
    memset(this->handle_, this->size_, 0);
//     char* ptr = (char*)this->handle_;
//     for (size_t i = 0; i < this->size_; ++i)
//         ptr[i] = 0;

}

inline void
jrate::mem::Buffer::set(size_t startIndex, size_t endIndex, size_t value)
{
    memset(this->handle_ + startIndex, endIndex - startIndex, value);
}
