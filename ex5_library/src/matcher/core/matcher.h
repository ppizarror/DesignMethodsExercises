#ifndef LIBRARY_MATCHER_H
#define LIBRARY_MATCHER_H

class Item;

class Matcher {
public:
    virtual bool match(Item *i) const = 0;
};

#endif //LIBRARY_MATCHER_H