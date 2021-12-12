#include "tamagotchi.h"

void State::setState(State *state) {
    this->tama->setState(state);
}

void Happy::doSport() { this->setState(new Hungry()); }

void Hungry::giveFood() { this->setState(new Sleepy()); }

void Sleepy::sleep() { this->setState(new Happy()); }