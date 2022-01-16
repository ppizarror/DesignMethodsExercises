#ifndef LIBRARY_EXACT_NAME_H
#define LIBRARY_EXACT_NAME_H

#include "core/matcher_unary.h"
#include <string>

class ExactNameMatcher : public UnaryMatcher {
private:
    std::string name;
public:
    ExactNameMatcher(std::string n) {
        this->name = n;
    };

    bool match(Item *item) const {
        return this->name == item->getName();
    };
};

#endif //LIBRARY_EXACT_NAME_H