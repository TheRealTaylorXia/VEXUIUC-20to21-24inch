#include "main.h"
#include "okapi/api.hpp"
#include "SubSystemHeaders/global.hpp"

using namespace okapi;

std::shared_ptr<OdomChassisController> chassis =
ChassisControllerBuilder()
  .withMotors({5,6,7}, {8,9,10})
  .withDimensions(AbstractMotor::gearset::green, {{4_in, 11.5_in}, imev5GreenTPR})
  .withOdometry()
  .buildOdometry();

void autonomous() {
  //1 ball inside - preload
  chassis->setState({0_in, 0_in, 0_deg});
  chassis->driveToPoint({4_ft, 0_ft});
  //Run intake when we have that - 2 balls inside
  chassis->driveToPoint({3_ft, 0_ft}, true);
  chassis->turnToPoint({4_ft, -3_ft});
  chassis->driveToPoint({4_ft, -3_ft});
  //Run reverse intake - 2 balls in center goal
  chassis->driveToPoint({3_ft, -2_ft}, true);
  chassis->turnToPoint({1_ft, 1_ft});
  chassis->driveToPoint({1_ft, 1_ft});
  //Run intake
  chassis->driveToPoint({0_ft, 2_ft});
  //Run reverse intake - 2 balls in corner goal

}
