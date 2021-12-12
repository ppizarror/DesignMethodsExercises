#ifndef LIBRARY_LIBRARY_H
#define LIBRARY_LIBRARY_H

#include <vector>
#include "../item/core/item.h"
#include "../matcher/core/matcher.h"

class Library {
private:
    std::vector<Item *> *items;
public:
    Library() { this->items = new std::vector<Item *>(); };
    ~Library() {
        // Remove each item within the list
        for (int i = 0; i < this->size(); i++) {
            delete this->items->at(i);
        }
        delete this->items;
    };
    void add_item(Item *item) { this->items->insert(this->items->end(), item); };
    int size() const { return (int) this->items->size(); }
    std::vector<Item *> *search(Matcher *m) {
        std::vector<Item *> *results = new std::vector<Item *>();
        for (int i = 0; i < this->size(); i++) {
            Item *item = this->items->at(i);
            if (m->match(item)) {
                results->insert(results->end(), item);
            }
        }
        return results;
    };
};

#endif //LIBRARY_LIBRARY_H