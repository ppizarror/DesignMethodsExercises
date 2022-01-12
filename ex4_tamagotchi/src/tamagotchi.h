#include "state.h"

class Tamagotchi {
private:
    State *state;
public:
    Tamagotchi() { this->setState(new Happy()); }
    bool isHappy() { return state->isHappy(); }
    bool isHungry() { return state->isHungry(); }
    bool isSleepy() { return state->isSleepy(); }
    void doSport() { state->doSport(); }
    void giveFood() { state->giveFood(); }
    void sleep() { state->sleep(); }
    void setState(State *s) {
        if (state) { delete state; }
        state = s;
        s->setTamagotchi(this);
    }
};