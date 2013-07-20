#ifndef _JRATE_MEM_DISPLAY_REFERENCE_CHECKER_H_
#define _JRATE_MEM_DISPLAY_REFERENCE_CHECKER_H_

#include <jrate/mem/IMemoryArea.h>

#define DISPLAY_SIZE 64

namespace jrate { namespace mem {

class DisplayRefChecker;
typedef DisplayRefChecker DisplayRefChecker_t;

/**
 * This class implements a display based memory reference
 * checker. For a description of the technique used to
 * implement diplay based reference checks please see:
 * "A. Corsaro, R. Cytron, Efficient Memory Reference Checks
 * in Real-Time Java, LCTES 2003".
 *
 * @author Angelo Corsaro <corsaro@cse.wustl.edu>
 */
class DisplayRefChecker {
public:
    DisplayRefChecker();

    template <typename T> DisplayRefChecker(T* ma) {
        typeID_ = ma->typeID();
        display_[0] = (size_t)this;
        depth_ = 0;
    }

    template <typename T> void init(T* ma) {
        typeID_ = ma->typeID();
        display_[0] = (size_t)this;
        depth_ = 0;
    }

    ~DisplayRefChecker();

public:
    bool checkReference(const jrate::mem::DisplayRefChecker& from);
    bool checkReference();

public:
    void validate(jrate::mem::DisplayRefChecker& parent);

    void invalidate();

public:
    inline bool isPrimordial() {
        return typeID_ & jrate::mem::PRIMORDIAL_MEMORY;
    }

private:
    int typeID_;
    int depth_;
    // TODO: Currently the display is statically allocated, we should
    // allocate this in the memory area that owns it.
    size_t display_[DISPLAY_SIZE];
};

} /* jrate */ } /* mem */

#endif // _JRATE_MEM_DISPLAY_REFERENCE_CHECKER_H_
