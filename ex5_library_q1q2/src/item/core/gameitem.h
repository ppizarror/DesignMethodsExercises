#ifndef LIBRARY_GAMEITEM_H
#define LIBRARY_GAMEITEM_H

#include "item.h"
#include <utility>

class GameItem : public Item {
public:
    GameItem(std::string name, int date) : Item(std::move(name), date) {};
};

#endif //LIBRARY_GAMEITEM_H