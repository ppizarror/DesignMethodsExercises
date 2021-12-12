#ifndef LIBRARY_EXACT_DATE_H
#define LIBRARY_EXACT_DATE_H

#include "core/matcher_unary.h"

class ExactDateMatcher : public UnaryMatcher {
private:
    int date;
public:
    ExactDateMatcher(int d) {
        this->date = d;
    };

    bool match(Item *item) const {
        return this->date == item->getDate();
    };
};

#endif //LIBRARY_EXACT_DATE_H