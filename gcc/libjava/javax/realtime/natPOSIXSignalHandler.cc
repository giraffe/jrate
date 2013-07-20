#include "javax/realtime/POSIXSignalHandler.h"
#include "jrate/sys/SignalManager.h"
#include "jrate/sys/ISignalHandler.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

class NativePOSIXSignalHandler : public jrate::sys::ISignalHandler {
public:
    NativePOSIXSignalHandler(int pipeID)
        : pipeID_(pipeID) { }

    virtual ~NativePOSIXSignalHandler() {}

public:
    virtual void handleSignal(int signum) {
        write(pipeID_, &signum, sizeof(int));
    }
    
private:
    int pipeID_;
};

void
javax::realtime::POSIXSignalHandler::init() {
    int *pipeID = new int[2];
    pipe(pipeID);
    this->pipeID_ = (gnu::gcj::RawData*)pipeID;

    this->natHandler_ =
        (::gnu::gcj::RawData*)(new NativePOSIXSignalHandler(pipeID[1]));

}

void
javax::realtime::POSIXSignalHandler::fini() {
    delete (NativePOSIXSignalHandler*)this->natHandler_;
}

void
javax::realtime::POSIXSignalHandler::registerNativeHandler(jint signum) {
    jrate::sys::SignalManager::registerSignalHandler(signum, (NativePOSIXSignalHandler*)this->natHandler_);
}

void
javax::realtime::POSIXSignalHandler::startDispatching() {
    int pid = ((int*)this->pipeID_)[0];
    int signum;
    while (this->enabled_) {
        read(pid, &signum, sizeof(int));
        this->fireSignal(signum);
    } 
}
