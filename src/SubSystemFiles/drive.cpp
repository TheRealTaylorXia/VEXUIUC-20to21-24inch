#include "main.h"


void setDriveMotors(){
  int leftJoystick = controller.get_analog(E_CONTROLLER_ANALOG_LEFT_Y);
  int rightJoystick = controller.get_analog(E_CONTROLLER_ANALOG_RIGHT_Y);

  if (abs(leftJoystick) < 10){ leftJoystick = 0; }
  if (abs(rightJoystick) < 10){ rightJoystick = 0; }

  setDriveMotors(leftJoystick, rightJoystick);
}


void setDriveMotors(int left, int right){
    baseLeftBack = left;
    baseLeftMid = left;
    baseLeftFront = left;
    baseRightBack = right;
    baseRightMid = right;
    baseRightFront = right;
}
