#pragma once
#include <vector>
#include "pictures.h"
#include "commands.h"

class Suchai {
private:
    int angle;
    std::vector<Picture *> *pictures;
public:
    explicit Suchai();
    ~Suchai();
    void setAngle(int a);
    int getAngle() const;
    int numberOfPictures() const;
    void receive(Commands *c);
    void addPicture(Picture *pic);
};