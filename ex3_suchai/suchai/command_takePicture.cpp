#include "command_takePicture.h"
#include "suchai.h"

void TakePictureCommand::doExecute(Suchai *suchai) {
    suchai->addPicture(new Picture());
}