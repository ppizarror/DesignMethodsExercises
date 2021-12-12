#pragma once
#include <stdexcept>

class Tamagotchi;
class State {
protected:
    Tamagotchi *tama{};
public:
    State() = default;
    ~State() = default;
    virtual bool isHappy() { return false; }
    virtual bool isHungry() { return false; }
    virtual bool isSleepy() { return false; }
    static void error() { throw std::logic_error("Wrong state!"); }
    virtual void doSport() { State::error(); }
    virtual void giveFood() { State::error(); }
    virtual void sleep() { State::error(); }
    void setState(State *state);
    void setTamagotchi(Tamagotchi *tamagotchi) { this->tama = tamagotchi; }
};

class Happy;
class Sleepy;
class Hungry;

class Happy : public State {
    bool isHappy() override { return true; }
    void doSport() override;
};

class Hungry : public State {
    bool isHungry() override { return true; }
    void giveFood() override;
};

class Sleepy : public State {
    bool isSleepy() override { return true; }
    void sleep() override;
};