#ifndef LIBRARY_OR_H
#define LIBRARY_OR_H

#include "core/matcher_binary.h"

class OrMatcher : public BinaryMatcher {
public:
    OrMatcher(Matcher *m1, Matcher *m2) {
        this->m1 = m1;
        this->m2 = m2;
    }

    bool match(Item *i) const {
        return this->m1->match(i) or this->m2->match(i);
    };
};

#endif //LIBRARY_OR_H