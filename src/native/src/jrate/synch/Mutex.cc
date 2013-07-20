// ************************************************************************
//    $Id: Mutex.cc 429 2004-09-15 20:32:02Z corsaro $
// ************************************************************************
#include <jrate/synch/Mutex.h>

template <>
void
jrate::synch::createMutex<true>(pthread_mutex_t* mutex)
{
    pthread_mutexattr_t attrib;
    pthread_mutexattr_init(&attrib);
    pthread_mutexattr_settype(&attrib, PTHREAD_MUTEX_RECURSIVE_NP);    
    pthread_mutex_init(mutex, &attrib);
    pthread_mutexattr_destroy(&attrib);
}
