#include "src/tanks.h"

int main() {
    NormalTank *tank1 = new NormalTank();
    SiegeTank *tank2 = new SiegeTank();
    tank1->print();
    tank2->print();
}
