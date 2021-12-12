#include <iostream>
#include "suchai/suchai.h"
#include "suchai/command_takePicture.h"
#include "suchai/command_rotate.h"

int main() {
    auto *suchai = new Suchai();
    std::cout << "Angle = " << suchai->getAngle() << std::endl;
    std::cout << "Number of Pictures = " << suchai->numberOfPictures() << std::endl;

    suchai->receive(new TakePictureCommand());
    suchai->receive(new RotateCommand());

    std::cout << "Angle = " << suchai->getAngle() << std::endl;
    std::cout << "Number of Pictures = " << suchai->numberOfPictures() << std::endl;
    return 0;
}
