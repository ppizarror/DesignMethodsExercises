#ifndef LIBRARY_PSXGAME_H
#define LIBRARY_PSXGAME_H

#include <utility>
#include "core/gameitem.h"

class PSXGame : public GameItem {
public:
    PSXGame(std::string name, int date) : GameItem(std::move(name), date) {};
};

#endif //LIBRARY_PSXGAME_H