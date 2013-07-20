#include <iostream>

#include "jrate/mem/BufferProvider.h"
#include "jrate/mem/Allocator.h"
#include "jrate/synch/Synchronizer.h"

class OutOfMemoryHandler {
public:
    static void handleOutOfMemory() {
        std::cout << "OutOfMemory Error!" << std::endl;
    }
};

typedef jrate::mem::SegregatedBufferProvider <
    jrate::mem::MMapBufferProvider<jrate::mem::SimpleMemLockingPolicy, 8>,
    3,
    12,
    OutOfMemoryHandler,
    jrate::synch::MutexSynchronizer_t > SegregatedBufferAllocator_t;


void testTrioMerge(SegregatedBufferAllocator_t& sba) {
    std::cout << "\n----------------TRIO MERGE---------------------\n" << std::endl;
    std::cout << "Available Memory: " << sba.available() << std::endl; 
    jrate::mem::Buffer buffer1 = sba.getBuffer(1 << 10);
    jrate::mem::Buffer buffer2 = sba.getBuffer(1 << 10);
    jrate::mem::Buffer buffer3 = sba.getBuffer(1 << 10);
    jrate::mem::Buffer buffer4 = sba.getBuffer(1 << 10);
    sba.releaseBuffer(buffer1);
    sba.releaseBuffer(buffer3);
    sba.releaseBuffer(buffer2);
    sba.releaseBuffer(buffer4);
    std::cout << "Available Memory: " << sba.available() << std::endl; 
    std::cout << "\n-----------------------------------------------\n" << std::endl; 
}

void testMergeWithNext(SegregatedBufferAllocator_t& sba) {
    std::cout << "\n----------------NEXT MERGE---------------------\n" << std::endl;
    std::cout << "Available Memory: " << sba.available() << std::endl; 
    jrate::mem::Buffer buffer1 = sba.getBuffer(1 << 9);
    jrate::mem::Buffer buffer2 = sba.getBuffer(1 << 9);
    jrate::mem::Buffer buffer3 = sba.getBuffer(1 << 9);
    jrate::mem::Buffer buffer4 = sba.getBuffer(1 << 9);
    sba.releaseBuffer(buffer3);
    sba.releaseBuffer(buffer2);
    sba.releaseBuffer(buffer1);
    sba.releaseBuffer(buffer4);
    std::cout << "Available Memory: " << sba.available() << std::endl; 
    std::cout << "\n-----------------------------------------------\n" << std::endl; 
    
}

int main(int argc, char* argv) {
    size_t size = 1 << 22; // 4 MB
    SegregatedBufferAllocator_t sba(size);
    testTrioMerge(sba);
    testMergeWithNext(sba);
    return 0;
}
