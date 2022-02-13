competition Competition;

// User defined function
void myblockfunction_Elevator_UP();
// User defined function
void myblockfunction_Start();
// User defined function
void myblockfunction_Intake_IN();
// User defined function
void myblockfunction_MOVEFORWARD();
// User defined function
void myblockfunction_Turn_RIGHT();
// User defined function
void myblockfunction_STOP();
// User defined function
void myblockfunction_Intake_OUT();
// User defined function
void myblockfunction_Flywheel();
// User defined function
void myblockfunction_MOVEBACKWARD();

float myVariable;

// User defined function
void myblockfunction_Elevator_UP() {
  Elevator.setVelocity(50.0, percent);
  Elevator.spin(forward);
}

// User defined function
void myblockfunction_Start() {
  BOARD.spin(forward);
  BOARD.setVelocity(10.0, percent);
}

// User defined function
void myblockfunction_Intake_IN() {
  IntakeL.spin(reverse);
  IntakeR.spin(forward);
  IntakeL.setVelocity(75.0, percent);
  IntakeR.setVelocity(75.0, percent);
}

// User defined function
void myblockfunction_MOVEFORWARD() {
  LW.setVelocity(75.0, percent);
  RW.setVelocity(75.0, percent);
  LW.spin(forward);
  RW.spin(forward);
}

// User defined function
void myblockfunction_Turn_RIGHT() {
  LW.setVelocity(35.0, percent);
  RW.setVelocity(35.0, percent);
  LW.spin(forward);
  RW.spin(reverse);
}

// User defined function
void myblockfunction_STOP() {
  RW.stop();
  LW.stop();
  IntakeL.stop();
  IntakeR.stop();
  Flywheel.stop();
  Elevator.stop();
  Flywheel2.stop();
}

// User defined function
void myblockfunction_Intake_OUT() {
  IntakeL.spin(forward);
  IntakeR.spin(reverse);
  IntakeL.setVelocity(100.0, percent);
  IntakeR.setVelocity(-100.0, percent);
}

// User defined function
void myblockfunction_Flywheel() {
  Flywheel2.spin(forward);
  Flywheel.spin(forward);
  Flywheel.setVelocity(75.0, percent);
  Flywheel2.setVelocity(75.0, percent);
}

// User defined function
void myblockfunction_MOVEBACKWARD() {
  LW.setVelocity(40.0, percent);
  RW.setVelocity(40.0, percent);
  LW.spin(reverse);
  RW.spin(reverse);
}

// "when driver control" hat block
int ondriver_drivercontrol_0() {
  while (true) {
    Flywheel.setStopping(coast);
    Flywheel2.setStopping(coast);
    Flywheel2.setVelocity(65.0, percent);
    Elevator.setVelocity(75.0, percent);
    Flywheel.setVelocity(65.0, percent);
    IntakeL.setVelocity(75.0, percent);
    IntakeR.setVelocity(75.0, percent);
    Flywheel.setStopping(coast);
    BOARD.setVelocity(10.0, percent);
    LW.setVelocity((Controller1.Axis3.position() + Controller1.Axis1.position()), percent);
    RW.setVelocity((Controller1.Axis3.position() - Controller1.Axis1.position()), percent);
    LW.spin(forward);
    RW.spin(forward);
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
      Flywheel2.spin(forward);
      Flywheel.spin(forward);
    }
    if (Controller1.ButtonDown.pressing()) {
      Flywheel.stop();
      Flywheel2.stop();
    }
    Flywheel.setStopping(coast);
    if (Controller1.ButtonR2.pressing() || Controller1.ButtonR1.pressing()) {
      if (Controller1.ButtonR1.pressing()) {
        IntakeL.spin(reverse);
        IntakeR.spin(forward);
      }
      if (Controller1.ButtonR2.pressing()) {
        IntakeL.spin(forward);
        IntakeR.spin(reverse);
      }
    }
    else {
      IntakeL.stop();
      IntakeR.stop();
    }
    if (Controller1.ButtonA.pressing()) {
      BOARD.spin(forward);
    }
    else {
      BOARD.stop();
    }
  wait(5, msec);
  }
  return 0;
}

// "when autonomous" hat block
int onauton_autonomous_0() {
  myblockfunction_Start();
  wait(0.1, seconds);
  myblockfunction_Intake_OUT();
  wait(3.0, seconds);
  myblockfunction_STOP();
  wait(0.1, seconds);
  myblockfunction_MOVEFORWARD();
  wait(0.55, seconds);
  myblockfunction_STOP();
  wait(0.1, seconds);
  myblockfunction_Turn_RIGHT();
  wait(1.52, seconds);
  myblockfunction_STOP();
  wait(0.1, seconds);
  myblockfunction_MOVEFORWARD();
  myblockfunction_Elevator_UP();
  myblockfunction_Intake_IN();
  wait(0.65, seconds);
  myblockfunction_STOP();
  wait(0.1, seconds);
  myblockfunction_Flywheel();
  wait(1.0, seconds);
  myblockfunction_Elevator_UP();
  myblockfunction_Flywheel();
  wait(3.0, seconds);
  myblockfunction_STOP();
  wait(2.0, seconds);
  myblockfunction_Intake_OUT();
  wait(1.0, seconds);
  myblockfunction_MOVEBACKWARD();
  myblockfunction_Intake_OUT();
  wait(1.0, seconds);
  myblockfunction_STOP();
  wait(0.1, seconds);
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
  while(Competition.isAutonomous() && Competition.isEnabled()) {this_thread::sleep_for(10);}
  auto0.stop();
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
