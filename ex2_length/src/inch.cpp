#include "length.h"

InchLength::InchLength(float i) {
    this->val = i;
}
float InchLength::value() const {
    return this->val;
}
Length* InchLength::add(Length *l) {
    return l->addInch(this);
}
Length* InchLength::addInch(InchLength *inchLength) {
    return new InchLength((float) (this->value() + inchLength->value()));
}
Length* InchLength::addMeter(MeterLength *meterLength) {
    return new MeterLength((float) (this->value() * 0.0254 + meterLength->value()));
}
