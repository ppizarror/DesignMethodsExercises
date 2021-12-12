#include <iostream>

class AbstractTank {
public:
    virtual std::string type() const = 0;

    virtual double cooldown() const = 0;

    virtual int damage() const = 0;

    void print() const {
        std::string stats = "(" + std::to_string(this->cooldown()) + "," + std::to_string(this->damage()) + ")";
        std::cout << this->type() + stats << std::endl;
    }
};

class NormalTank : public AbstractTank {
    std::string type() const override {
        return "NormalTank";
    }

    double cooldown() const override {
        return 0.74;
    }

    int damage() const override {
        return 15;
    }
};

class SiegeTank : public AbstractTank {
    std::string type() const override {
        return "SiegeTank";
    }

    double cooldown() const override {
        return 2.14;
    }

    int damage() const override {
        return 40;
    }
};