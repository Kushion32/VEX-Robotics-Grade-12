competition Competition;

// User defined function
void myblockfunction_STOP();
// User defined function
void myblockfunction_Intake_IN();
// User defined function
void myblockfunction_MOVEFORWARD();
// User defined function
void myblockfunction_Forwardfast();
// User defined function
void myblockfunction_Intake_OUT();
// User defined function
void myblockfunction_MOVEBACKWARD();
// User defined function
void myblockfunction_flywheel_stop();
// User defined function
void myblockfunction_Flywheel();
// User defined function
void myblockfunction_Turn_LEFT();
// User defined function
void myblockfunction_TurnLeftFast();
// User defined function
void myblockfunction_Elevator_UP();
// User defined function
void myblockfunction_Turn_RIGHT();
// User defined function
void myblockfunction_TurnRightFast();
// User defined function
void myblockfunction_ElevatorUPFAST();
// User defined function
void myblockfunction_Elevator_Down();
// User defined function
void myblockfunction_MOVEBACKWARD_FAST();
// User defined function
void myblockfunction_IntakeRightIn();
// User defined function
void myblockfunction_FORWARDSLOW();
// User defined function
void myblockfunction_IntakeLeftIn();
// User defined function
void myblockfunction_ForwardRIGHT();

float myVariable;

// User defined function
void myblockfunction_STOP() {
  RB.stop();
  LB.stop();
  IntakeL.stop();
  IntakeR.stop();
  Elevator.stop();
}

// User defined function
void myblockfunction_Intake_IN() {
  IntakeL.spin(reverse);
  IntakeR.spin(forward);
  IntakeL.setVelocity(100.0, percent);
  IntakeR.setVelocity(100.0, percent);
}

// User defined function
void myblockfunction_MOVEFORWARD() {
  LB.setVelocity(40.0, percent);
  RB.setVelocity(40.0, percent);
  LB.spin(forward);
  RB.spin(forward);
}

// User defined function
void myblockfunction_Forwardfast() {
  LB.setVelocity(90.0, percent);
  RB.setVelocity(90.0, percent);
  LB.spin(forward);
  RB.spin(forward);
}

// User defined function
void myblockfunction_Intake_OUT() {
  IntakeL.spin(forward);
  IntakeR.spin(reverse);
  IntakeL.setVelocity(-100.0, percent);
  IntakeR.setVelocity(100.0, percent);
}

// User defined function
void myblockfunction_MOVEBACKWARD() {
  LB.setVelocity(40.0, percent);
  RB.setVelocity(40.0, percent);
  LB.spin(reverse);
  RB.spin(reverse);
}

// User defined function
void myblockfunction_flywheel_stop() {
  Flywheel.stop();
  Flywheel2.stop();
}

// User defined function
void myblockfunction_Flywheel() {
  Flywheel.setVelocity(75.0, percent);
  Flywheel2.setVelocity(75.0, percent);
  Flywheel2.spin(forward);
  Flywheel.spin(forward);
}

// User defined function
void myblockfunction_Turn_LEFT() {
  LB.setVelocity(25.0, percent);
  RB.setVelocity(25.0, percent);
  LB.spin(reverse);
  RB.spin(forward);
}

// User defined function
void myblockfunction_TurnLeftFast() {
  LB.setVelocity(50.0, percent);
  RB.setVelocity(50.0, percent);
  LB.spin(reverse);
  RB.spin(forward);
}

// User defined function
void myblockfunction_Elevator_UP() {
  Elevator.setVelocity(50.0, percent);
  Elevator.spin(forward);
}

// User defined function
void myblockfunction_Turn_RIGHT() {
  LB.setVelocity(25.0, percent);
  RB.setVelocity(25.0, percent);
  LB.spin(forward);
  RB.spin(reverse);
}

// User defined function
void myblockfunction_TurnRightFast() {
  LB.setVelocity(50.0, percent);
  RB.setVelocity(50.0, percent);
  LB.spin(forward);
  RB.spin(reverse);
}

// User defined function
void myblockfunction_ElevatorUPFAST() {
  Elevator.setVelocity(80.0, percent);
  Elevator.spin(forward);
}

// User defined function
void myblockfunction_Elevator_Down() {
  Elevator.setVelocity(20.0, percent);
  Elevator.spin(reverse);
}

// User defined function
void myblockfunction_MOVEBACKWARD_FAST() {
  LB.setVelocity(100.0, percent);
  RB.setVelocity(100.0, percent);
  LB.spin(reverse);
  RB.spin(reverse);
}

// User defined function
void myblockfunction_IntakeRightIn() {
  IntakeR.setVelocity(-75.0, percent);
  IntakeR.spin(forward);
}

// User defined function
void myblockfunction_FORWARDSLOW() {
  LB.setVelocity(20.0, percent);
  RB.setVelocity(20.0, percent);
  LB.spin(forward);
  RB.spin(forward);
}

// User defined function
void myblockfunction_IntakeLeftIn() {
  IntakeL.setVelocity(-75.0, percent);
  IntakeL.spin(reverse);
}

// User defined function
void myblockfunction_ForwardRIGHT() {
  LB.setVelocity(60.0, percent);
  RB.setVelocity(20.0, percent);
  LB.spin(forward);
  RB.spin(forward);
}

// "when driver control" hat block
int ondriver_drivercontrol_0() {
  while (true) {
    LB.setStopping(coast);
    RB.setStopping(coast);
    Flywheel2.setStopping(brake);
    Antitip.setVelocity(50.0, percent);
    Flywheel.setStopping(coast);
    Flywheel2.setStopping(coast);
    IntakeL.setVelocity(100.0, percent);
    IntakeR.setVelocity(100.0, percent);
    Elevator.setVelocity(75.0, percent);
    if (Controller1.ButtonL2.pressing() || Controller1.ButtonL1.pressing()) {
      if (Controller1.ButtonL1.pressing()) {
        Elevator.spin(forward);
      }
      if (Controller1.ButtonL2.pressing()) {
        Elevator.spin(reverse);
      }
    }
    else {
      Elevator.stop();
    }
    if (Controller1.ButtonUp.pressing()) {
      Flywheel2.setVelocity(69.0, percent);
      Flywheel.setVelocity(69.0, percent);
      Flywheel.spin(forward);
      Flywheel2.spin(forward);
    }
    if (Controller1.ButtonDown.pressing()) {
      Flywheel.stop();
      Flywheel2.stop();
    }
    if (Controller1.ButtonRight.pressing()) {
      Flywheel2.setVelocity(4.0, percent);
      Flywheel2.setVelocity(4.0, percent);
      Flywheel2.spin(reverse);
      Flywheel.spin(reverse);
    }
    if (Controller1.ButtonR2.pressing() || Controller1.ButtonR1.pressing()) {
      if (Controller1.ButtonR2.pressing()) {
        IntakeL.spin(reverse);
        IntakeR.spin(forward);
      }
      if (Controller1.ButtonR1.pressing()) {
        IntakeL.spin(forward);
        IntakeR.spin(reverse);
      }
    }
    else {
      IntakeL.stop();
      IntakeR.stop();
    }
    if (Controller1.Axis1.position() < 50.0) {
      LB.setVelocity((Controller1.Axis3.position() + Controller1.Axis1.position() / 2.0), percent);
      RB.setVelocity((Controller1.Axis3.position() - Controller1.Axis1.position() / 2.0), percent);
      RB.spin(forward);
      LB.spin(forward);
    }
    if (Controller1.Axis1.position() > 50.0) {
      LB.setVelocity((Controller1.Axis3.position() + Controller1.Axis1.position()), percent);
      RB.setVelocity((Controller1.Axis3.position() - Controller1.Axis1.position()), percent);
      RB.spin(forward);
      LB.spin(forward);
    }
    if (Controller1.Axis1.position() < -50.0) {
      LB.setVelocity((Controller1.Axis3.position() + Controller1.Axis1.position()), percent);
      RB.setVelocity((Controller1.Axis3.position() - Controller1.Axis1.position()), percent);
      RB.spin(forward);
      LB.spin(forward);
    }
    if (Controller1.Axis1.position() > -50.0) {
      LB.setVelocity((Controller1.Axis3.position() + Controller1.Axis1.position() / 2.0), percent);
      RB.setVelocity((Controller1.Axis3.position() - Controller1.Axis1.position() / 2.0), percent);
      RB.spin(forward);
      LB.spin(forward);
    }
    if (Controller1.ButtonY.pressing() || Controller1.ButtonA.pressing()) {
      if (Controller1.ButtonY.pressing()) {
        Antitip.spinToPosition(85.0, degrees, true);
      }
      if (Controller1.ButtonA.pressing()) {
        Antitip.spinToPosition(-5.0, degrees, true);
      }
    }
    else {
      Antitip.stop();
    }
  wait(5, msec);
  }
  return 0;
}

// "when autonomous" hat block
int onauton_autonomous_0() {
  return 0;
}

// "when autonomous" hat block
int onauton_autonomous_1() {
  return 0;
}

// "when autonomous" hat block
int onauton_autonomous_2() {
  return 0;
}

// "when autonomous" hat block
int onauton_autonomous_3() {
  LB.setStopping(brake);
  RB.setStopping(brake);
  myblockfunction_Elevator_Down();
  myblockfunction_Flywheel();
  wait(0.9, seconds);
  myblockfunction_STOP();
  wait(0.01, seconds);
  myblockfunction_ForwardRIGHT();
  myblockfunction_Intake_IN();
  myblockfunction_Flywheel();
  wait(0.6, seconds);
  myblockfunction_STOP();
  wait(0.01, seconds);
  myblockfunction_ForwardRIGHT();
  myblockfunction_Intake_IN();
  myblockfunction_Flywheel();
  myblockfunction_Elevator_UP();
  wait(0.9, seconds);
  myblockfunction_STOP();
  wait(0.01, seconds);
  myblockfunction_Flywheel();
  myblockfunction_Elevator_UP();
  wait(0.2, seconds);
  myblockfunction_STOP();
  wait(0.1, seconds);
  LB.setVelocity(30.0, percent);
  LB.spin(reverse);
  RB.setVelocity(65.0, percent);
  RB.spin(reverse);
  wait(1.2, seconds);
  myblockfunction_STOP();
  wait(0.1, seconds);
  myblockfunction_TurnRightFast();
  wait(0.49, seconds);
  myblockfunction_Forwardfast();
  myblockfunction_Flywheel();
  wait(0.3, seconds);
  myblockfunction_Forwardfast();
  myblockfunction_Flywheel();
  myblockfunction_Elevator_UP();
  wait(0.7, seconds);
  myblockfunction_STOP();
  wait(0.01, seconds);
  myblockfunction_TurnLeftFast();
  myblockfunction_Flywheel();
  wait(0.3, seconds);
  myblockfunction_TurnLeftFast();
  myblockfunction_Flywheel();
  myblockfunction_Elevator_UP();
  wait(0.3, seconds);
  myblockfunction_STOP();
  wait(0.01, seconds);
  myblockfunction_Forwardfast();
  myblockfunction_Flywheel();
  wait(0.8, seconds);
  myblockfunction_STOP();
  wait(0.01, seconds);
  myblockfunction_Elevator_UP();
  wait(0.8, seconds);
  myblockfunction_STOP();
  wait(0.1, seconds);
  LB.setVelocity(30.0, percent);
  LB.spin(reverse);
  RB.setVelocity(70.0, percent);
  RB.spin(reverse);
  wait(1.15, seconds);
  myblockfunction_STOP();
  wait(0.1, seconds);
  myblockfunction_Forwardfast();
  myblockfunction_Intake_IN();
  wait(1.35, seconds);
  myblockfunction_STOP();
  wait(0.001, seconds);
  LB.setVelocity(40.0, percent);
  LB.spin(forward);
  RB.setVelocity(75.0, percent);
  RB.spin(forward);
  myblockfunction_IntakeLeftIn();
  myblockfunction_IntakeRightIn();
  myblockfunction_Elevator_UP();
  wait(0.8, seconds);
  myblockfunction_STOP();
  wait(0.001, seconds);
  myblockfunction_MOVEFORWARD();
  myblockfunction_Elevator_UP();
  wait(1.05, seconds);
  myblockfunction_STOP();
  wait(0.1, seconds);
  myblockfunction_Flywheel();
  myblockfunction_ElevatorUPFAST();
  wait(1.5, seconds);
  myblockfunction_STOP();
  wait(0.1, seconds);
  myblockfunction_MOVEBACKWARD();
  myblockfunction_Intake_OUT();
  wait(1.0, seconds);
  myblockfunction_STOP();
  myblockfunction_flywheel_stop();
  wait(0.1, seconds);
  return 0;
}

// "when autonomous" hat block
int onauton_autonomous_4() {
  return 0;
}

void VEXcode_driver_task() {
  // Start the driver control tasks....
  vex::task drive0(ondriver_drivercontrol_0);


  while(Competition.isDriverControl() && Competition.isEnabled()) {this_thread::sleep_for(10);}
  drive0.stop();
  return;
}

void VEXcode_auton_task() {
  // Start the auton control tasks....
  vex::task auto0(onauton_autonomous_0);
vex::task auto1(onauton_autonomous_1);
vex::task auto2(onauton_autonomous_2);
vex::task auto3(onauton_autonomous_3);
vex::task auto4(onauton_autonomous_4);
  while(Competition.isAutonomous() && Competition.isEnabled()) {this_thread::sleep_for(10);}
  auto0.stop();
auto1.stop();
auto2.stop();
auto3.stop();
auto4.stop();
  return;
}



int main() {
  vex::competition::bStopTasksBetweenModes = false;
  Competition.autonomous(VEXcode_auton_task);
  Competition.drivercontrol(VEXcode_driver_task);

  // post event registration

  // set default print color to black
  printf("\033[30m");

  // wait for rotation sensor to fully initialize
  wait(30, msec);

}
