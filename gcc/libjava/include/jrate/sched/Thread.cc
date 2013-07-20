#include <jrate/sched/Thread.h>

#include <time.h>
#include <cstdio>


std::string jrate::sched::threadNameGenerator() {
    static int threadCount = 0;
    char buf[7];
    memset(buf, 0, sizeof(buf));
    sprintf(buf, "%d", ++threadCount);
    std::string name("jrate::sched::Thread-");
    name.append(buf);
    return name;
}
  




