#include <jrate/synch/EventVariable.h>

jrate::synch::EventVariable::EventVariable(bool notified)
    : isNotified_(notified),
      waitingThreads_(0)
{
    pthread_mutex_init(&mutex_, 0);
    pthread_cond_init(&cond_, 0);
}

jrate::synch::EventVariable::~EventVariable() {
    pthread_mutex_destroy(&mutex_);
    pthread_cond_destroy(&cond_);
}

void
jrate::synch::EventVariable::notify() {
    pthread_mutex_lock(&mutex_);
    if (waitingThreads_ != 0) {
        waitingThreads_--;
        pthread_cond_signal(&cond_);
    }
    else
        isNotified_ = true; 
    pthread_mutex_unlock(&mutex_);
}

void
jrate::synch::EventVariable::notifyAll() {
    pthread_mutex_lock(&mutex_);
    isNotified_ = true;
    if (waitingThreads_ != 0) {
        waitingThreads_--;
        pthread_cond_broadcast(&cond_);
    }
    pthread_mutex_unlock(&mutex_);    
}

void
jrate::synch::EventVariable::wait() {
    pthread_mutex_lock(&mutex_);
    if (isNotified_ == false) {
        waitingThreads_++;
        pthread_cond_wait(&cond_, &mutex_);
    }
    else {
        isNotified_ = false;
    }
    pthread_mutex_unlock(&mutex_); 
}

bool
jrate::synch::EventVariable::testAndWait() {
    pthread_mutex_lock(&mutex_);
    bool retVal = false;
    if (isNotified_ == false) {
        waitingThreads_++;
        pthread_cond_wait(&cond_, &mutex_);
    }
    else {
        isNotified_ = false;
        retVal = true;
    }
    pthread_mutex_unlock(&mutex_); 
    return retVal;
}
