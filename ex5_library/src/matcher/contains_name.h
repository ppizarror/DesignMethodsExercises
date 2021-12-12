#ifndef LIBRARY_CONTAINS_NAME_H
#define LIBRARY_CONTAINS_NAME_H

#include "core/matcher_unary.h"
#include <algorithm>
#include <string>

class ContainsNameMatcher : public UnaryMatcher {
private:
    std::string name;
public:
    ContainsNameMatcher(std::string n) {
        std::transform(n.begin(), n.end(), n.begin(), ::tolower);
        this->name = n;
    };

    bool match(Item *item) const {
        std::string n = item->getName();
        std::transform(n.begin(), n.end(), n.begin(), ::tolower);
        return n.find(this->name) != std::string::npos;
    };
};

#endif //LIBRARY_CONTAINS_NAME_H