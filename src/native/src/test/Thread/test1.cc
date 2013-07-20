#include <sched.h>
#include <jrate/sched/Types.h>
#include <iostream>

typedef jrate::sched::Thread_t    Thread_t;
typedef jrate::sched::Scheduler_t Scheduler_t;
typedef jrate::sched::Scheduler_t::SchedParams_t SchedParams_t;

class Logic : public jrate::sched::Runnable {
public:
    Logic(char ch) : ch_(ch) { }
    virtual ~Logic() { }
    virtual void run() {
        Thread_t *currentThread = Thread_t::currentThread();
        for (int c = 1; c <= 3; ++c) {
            for (int i = 0; i < 30; ++i) 
                std::cout << ch_;
            std::cout << "-";
            currentThread->sleep(3);
        }
//        std::cout << std::endl;
    }
public:
    char ch_;
};

int main(int, char**) {
    // Register the main thread with the default scheduler.
    Scheduler_t::instance().registerMainThread();
    
    SchedParams_t sp(Scheduler_t::instance().getMinPriority());
    Thread_t *mainThread = Thread_t::currentThread();
    std::cout << "Hello I am " << mainThread->getName() << std::endl;
    Logic logic1('I');
    Logic logic2('V');
    Logic logic3('X');
    Thread_t thread1(&logic1, sp);
    sp +=1;
    Thread_t thread2(&logic2, sp);
    sp +=1;
    Thread_t thread3(&logic3, sp);
    thread1.start();
    thread2.start();
    thread3.start();

    thread1.join();
    thread2.join();
    thread3.join();
    std::cout << std::endl;
    return 0;
}
