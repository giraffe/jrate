#include "jrate/synch/Semaphore.h"

jrate::synch::Semaphore::Semaphore(unsigned int count) {
  sem_init(&this->semaphore,
           0, // Linux Supports only Process-Local Semaphore
           count);
}

jrate::synch::Semaphore::~Semaphore() {
  sem_destroy(&this->semaphore);
}
