// ************************************************************************
//    $Id: AsyncEventHandler.cc 416 2004-02-22 18:35:45Z corsaro $
// ************************************************************************
#include "javax/realtime/AsyncEventHandler.h"
#include "jrate/synch/AtomicCounter.h"
#include <gnu/gcj/RawData.h>
#include <stdlib.h>
#include <stdio.h>

inline
jrate::synch::AtomicCounter* natAtomicCounter(gnu::gcj::RawData* rd) {
    return (jrate::synch::AtomicCounter*)rd;
}

void
javax::realtime::AsyncEventHandler::init() {
    jrate::synch::AtomicCounter* at = new jrate::synch::AtomicCounter(0);
    this->natFireCount_ = (gnu::gcj::RawData*)at; 
}

void
javax::realtime::AsyncEventHandler::fini() {
    delete natAtomicCounter(this->natFireCount_); 
}

jint
javax::realtime::AsyncEventHandler::getAndClearPendingFireCount() {
    return natAtomicCounter(this->natFireCount_)->getAndClear();
}

jint
javax::realtime::AsyncEventHandler::getAndDecrementPendingFireCount() {
    return natAtomicCounter(this->natFireCount_)->getAndDec(); 
}

jint
javax::realtime::AsyncEventHandler::getAndIncrementPendingFireCount() {
    return natAtomicCounter(this->natFireCount_)->getAndInc();;
}

jint
javax::realtime::AsyncEventHandler::getPendingFireCount() {
    return natAtomicCounter(this->natFireCount_)->count();
}
