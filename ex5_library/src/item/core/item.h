#ifndef LIBRARY_ITEM_H
#define LIBRARY_ITEM_H

#include <string>
#include <utility>

class Item {
protected:
    std::string name;
    int date;
public:
    Item(std::string item_name, int item_date) {
        this->name = std::move(item_name);
        this->date = item_date;
    };

    std::string getName() const {
        return this->name;
    }

    int getDate() const {
        return this->date;
    }
};

#endif //LIBRARY_ITEM_H