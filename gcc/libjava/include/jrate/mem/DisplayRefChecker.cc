#include <jrate/mem/DisplayRefChecker.h>

jrate::mem::DisplayRefChecker::DisplayRefChecker() {
    display_[0] = (size_t)this;
    depth_ = 0;
}

jrate::mem::DisplayRefChecker::~DisplayRefChecker() { }

bool
jrate::mem::DisplayRefChecker::checkReference(const jrate::mem::DisplayRefChecker& from) {
    
    if (typeID_ & jrate::mem::SAFE_REFERENCE_MEMORY)
        return true;
    
    if (from.typeID_ & jrate::mem::SAFE_REFERENCE_MEMORY)
        return false;
    
    // Both memory are scoped let's check with the display 
    if (from.depth_ < depth_)
        return false;
    
    return (from.display_[depth_] == (size_t)this);
}

bool
jrate::mem::DisplayRefChecker::checkReference() {
    if (typeID_ & jrate::mem::SAFE_REFERENCE_MEMORY)
        return true;
    return false;
}

void
jrate::mem::DisplayRefChecker::validate(jrate::mem::DisplayRefChecker& parent) {
    if (typeID_ & jrate::mem::SCOPED_MEMORY) {
        depth_ = parent.depth_ + 1;
        display_[depth_] = (size_t)this;
        
        for (int i = 0; i < depth_; ++i) {
            display_[i] = parent.display_[i];
        }
    }
}

void
jrate::mem::DisplayRefChecker::invalidate() {
    display_[0] = (size_t)this;
    depth_ = 0; 
}
