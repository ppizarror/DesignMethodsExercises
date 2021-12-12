#ifndef LIBRARY_WIIGAME_H
#define LIBRARY_WIIGAME_H

#include <utility>
#include "core/gameitem.h"

class WiiGame : public GameItem {
public:
    WiiGame(std::string name, int date) : GameItem(std::move(name), date) {};
};

#endif //LIBRARY_WIIGAME_H