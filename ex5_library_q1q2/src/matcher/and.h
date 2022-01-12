#ifndef LIBRARY_AND_H
#define LIBRARY_AND_H

#include "core/matcher_binary.h"

class AndMatcher : public BinaryMatcher {
public:
    AndMatcher(Matcher *m1, Matcher *m2) {
        this->m1 = m1;
        this->m2 = m2;
    }

    bool match(Item *i) const {
        return this->m1->match(i) and this->m2->match(i);
    };
};

#endif //LIBRARY_AND_H