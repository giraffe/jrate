#ifndef _JRATE_SCHED_PRIORITY_PARAMETERS_H_
#define _JRATE_SCHED_PRIORITY_PARAMETERS_H_

namespace jrate { namespace sched {

class PriorityParameters {
public:
    PriorityParameters(unsigned short p = 0);
    PriorityParameters(const PriorityParameters& p);
    ~PriorityParameters();

public:
    inline unsigned short getPriority() const { return priority_; }
    inline void setPriority(unsigned short p) { priority_ = p; }

public:
    bool operator==(const PriorityParameters& p);
    const PriorityParameters& operator=(const PriorityParameters& p);
    const PriorityParameters& operator+=(const PriorityParameters& p);
    const PriorityParameters& operator-=(const PriorityParameters& p);
    const PriorityParameters& operator+=(unsigned short p);
    const PriorityParameters& operator-=(unsigned short p);

    const PriorityParameters operator+(const PriorityParameters& p);
    const PriorityParameters operator-(const PriorityParameters& p);

    const PriorityParameters& operator++();
    const PriorityParameters& operator--();

    const PriorityParameters& operator++(int);
    const PriorityParameters& operator--(int);

private:
    unsigned short priority_;
};

} /* jrate */ } /* sched */
#endif // _JRATE_SCHED_PRIORITY_PARAMETERS_H_
