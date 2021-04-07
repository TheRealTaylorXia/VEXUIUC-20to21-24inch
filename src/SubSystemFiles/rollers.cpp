#include "main.h"


void setRollers(){
  int rightShoulderTop = controller.get_digital(E_CONTROLLER_DIGITAL_L1);
  int rightShoulderBot = controller.get_digital(E_CONTROLLER_DIGITAL_L2);

  int rollspeed = rightShoulderTop*127 + rightShoulderBot*-127;

  setRollers(rollspeed);
}


void setRollers(int speed){
    rollerBot = speed;
    rollerMid = speed;
    rollerTop = speed;
    rollerBack = speed;
}
