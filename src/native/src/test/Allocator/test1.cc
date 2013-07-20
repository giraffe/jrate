#include <iostream>

#include <jrate/mem/Allocator.h>
#include <jrate/synch/Synchronizer.h>

class OutOfMemoryHandler {
public:
    static void handleOutOfMemory() {
        std::cout << "OutOfMemory Error!" << std::endl;
    }
};


typedef jrate::mem::StackAllocator<
    jrate::mem::MMapBufferProvider<jrate::mem::SimpleMemLockingPolicy, 8>,
    jrate::mem::DefaultStackAllocatorHeader,
    8,
    OutOfMemoryHandler,
    jrate::synch::MutexSynchronizer_t,
    jrate::mem::DebugObjectInitializer,
    jrate::mem::DebugFinalizer,
    jrate::mem::ZeroBufInitializer,
    jrate::mem::ZeroRecycler,
    char*> CTAllocator;

CTAllocator allocator(10000000, 10000000);

int main(int, char** argv) {


    CTAllocator::ptr_t ptr;
    for (int c =0; c < 10; ++c) {
        for (int i = 0; i < 5; ++i)
            ptr = allocator.allocateObject(i, &i);
        allocator.garbageCollect();
    }
    return 0;
}

