#ifndef LIBRARY_MATCHER_BINARY_H
#define LIBRARY_MATCHER_BINARY_H

#include "matcher.h"

class BinaryMatcher : public Matcher {
protected:
    Matcher *m1, *m2;
};

#endif //LIBRARY_MATCHER_BINARY_H