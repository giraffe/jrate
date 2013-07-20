#include <jrate/sched/PriorityParameters.h>

jrate::sched::PriorityParameters::PriorityParameters(unsigned short p)
    : priority_(p) { }

jrate::sched::PriorityParameters::PriorityParameters(const jrate::sched::PriorityParameters& p)
    : priority_(p.priority_) { }

jrate::sched::PriorityParameters::~PriorityParameters() { }

bool
jrate::sched::PriorityParameters::operator==(const jrate::sched::PriorityParameters& p)
{
    return priority_ == p.priority_;
}

const jrate::sched::PriorityParameters&
jrate::sched::PriorityParameters::operator=(const jrate::sched::PriorityParameters& p)
{
    priority_ = p.priority_;
    return *this;
}

const jrate::sched::PriorityParameters&
jrate::sched::PriorityParameters::operator+=(const jrate::sched::PriorityParameters& p)
{
    priority_ += p.priority_;
    return *this;
}

const jrate::sched::PriorityParameters&
jrate::sched::PriorityParameters::operator-=(const jrate::sched::PriorityParameters& p)
{
    priority_ -= p.priority_;
    return *this;
}


const jrate::sched::PriorityParameters&
jrate::sched::PriorityParameters::operator+=(unsigned short p)
{
    priority_ += p;
    return *this;
}

const jrate::sched::PriorityParameters&
jrate::sched::PriorityParameters::operator-=(unsigned short p)
{
    priority_ -= p;
    return *this;
}


const jrate::sched::PriorityParameters
jrate::sched::PriorityParameters::operator+(const jrate::sched::PriorityParameters& p)
{
    jrate::sched::PriorityParameters result(priority_ + p.priority_);
    return result;
}

const jrate::sched::PriorityParameters
jrate::sched::PriorityParameters::operator-(const jrate::sched::PriorityParameters& p)
{
    jrate::sched::PriorityParameters result(priority_ - p.priority_);
    return result;
}

const jrate::sched::PriorityParameters&
jrate::sched::PriorityParameters::operator++()
{
    ++priority_;
    return *this;
}

const jrate::sched::PriorityParameters&
jrate::sched::PriorityParameters::operator++(int)
{
    priority_++;
    return *this;
}

const jrate::sched::PriorityParameters&
jrate::sched::PriorityParameters::operator--()
{
    --priority_;
    return *this;
}

const jrate::sched::PriorityParameters&
jrate::sched::PriorityParameters::operator--(int)
{
    priority_--;
    return *this;
}
