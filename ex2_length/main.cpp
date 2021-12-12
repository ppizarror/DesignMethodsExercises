#include <iostream>
#include "src/length.h"

int main() {
    auto *a = new MeterLength(3);
    auto *b = new MeterLength(2);
    auto *c = new InchLength(10);
    auto *s = new MeterLength(0);

    std::cout << "Meters: " << s->value() << std::endl;
    s = dynamic_cast<MeterLength *>(s->add(a));
    std::cout << "Meters (+a): " << s->value() << std::endl;
    s = dynamic_cast<MeterLength *>(s->add(b));
    std::cout << "Meters (+b): " << s->value() << std::endl;
    s = dynamic_cast<MeterLength *>(s->add(c));
    std::cout << "Meters (+c): " << s->value() << std::endl;

    return 0;
}
