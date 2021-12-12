#include "length.h"

MeterLength::MeterLength(float i) {
    this->val = i;
}

float MeterLength::value() const {
    return this->val;
}

Length* MeterLength::add(Length *l) {
    return l->addMeter(this);
}

Length* MeterLength::addInch(InchLength *inchLength) {
    return new InchLength((float) (this->value() * 39.37 + inchLength->value()));
}

Length* MeterLength::addMeter(MeterLength *meterLength) {
    return new MeterLength((float) (this->value() + meterLength->value()));
}
