#include "main.h"

using namespace pros;

void opcontrol() {
  while (true){
    delay(10);

    //Function list
    setDriveMotors();
    setRollers();
  }
}
