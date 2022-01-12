#ifndef LIBRARY_DATE_LT_H
#define LIBRARY_DATE_LT_H

#include "core/matcher_unary.h"

class DateLTMatcher : public UnaryMatcher {
private:
    int date;
public:
    DateLTMatcher(int d) {
        this->date = d;
    };

    bool match(Item *item) const {
        return this->date > item->getDate();
    };
};

#endif //LIBRARY_DATE_LT_H