#include "suchai.h"

Suchai::Suchai() {
    this->angle = 0;
    this->pictures = new std::vector<Picture *>();
}
Suchai::~Suchai() { delete this->pictures; }
void Suchai::setAngle(int a) { this->angle = a; }
int Suchai::getAngle() const { return this->angle; }
int Suchai::numberOfPictures() const {
    return (int) (this->pictures->size());
}
void Suchai::receive(Commands *c) {
    c->doExecute(this);
}
void Suchai::addPicture(Picture *pic) {
    this->pictures->insert(this->pictures->end(), pic);
}