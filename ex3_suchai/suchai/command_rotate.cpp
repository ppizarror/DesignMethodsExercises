#include "command_rotate.h"
#include "suchai.h"

void RotateCommand::doExecute(Suchai *suchai) {
    suchai->setAngle(suchai->getAngle() + 10);
}