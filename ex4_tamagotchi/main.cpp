#include <iostream>
#include "src/tamagotchi.h"

int main() {
    auto *tama = new Tamagotchi();
    std::cout << tama->isSleepy() << std::endl;
}