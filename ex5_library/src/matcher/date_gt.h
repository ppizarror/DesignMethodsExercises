#ifndef LIBRARY_DATE_GT_H
#define LIBRARY_DATE_GT_H

#include "core/matcher_unary.h"

class DateGTMatcher : public UnaryMatcher {
private:
    int date;
public:
    DateGTMatcher(int d) {
        this->date = d;
    };

    bool match(Item *item) const {
        return this->date < item->getDate();
    };
};

#endif //LIBRARY_DATE_GT_H