competition Competition;

// User defined function
void myblockfunction_Intake_IN();
// User defined function
void myblockfunction_Flipper();
// User defined function
void myblockfunction_Start();
// User defined function
void myblockfunction_MOVEFORWARD();
// User defined function
void myblockfunction_STOP();
// User defined function
void myblockfunction_Intake_OUT();
// User defined function
void myblockfunction_MOVEBACKWARD();
// User defined function
void myblockfunction_Flywheel();
// User defined function
void myblockfunction_Turn_LEFT();
// User defined function
void myblockfunction_Elevator_UP();
// User defined function
void myblockfunction_Turn_RIGHT();

float myVariable;

// User defined function
void myblockfunction_Intake_IN() {
}

// User defined function
void myblockfunction_Flipper() {
  Flipper.spin(reverse);
  Flipper.setVelocity(-65.0, percent);
}

// User defined function
void myblockfunction_Start() {
}

// User defined function
void myblockfunction_MOVEFORWARD() {
  LW.setVelocity(75.0, percent);
  RW.setVelocity(75.0, percent);
  LW.spin(forward);
  RW.spin(forward);
}

// User defined function
void myblockfunction_STOP() {
  Flipper.stop();
}

// User defined function
void myblockfunction_Intake_OUT() {
}

// User defined function
void myblockfunction_MOVEBACKWARD() {
  LW.setVelocity(40.0, percent);
  RW.setVelocity(40.0, percent);
  LW.spin(reverse);
  RW.spin(reverse);
}

// User defined function
void myblockfunction_Flywheel() {
}

// User defined function
void myblockfunction_Turn_LEFT() {
  LW.setVelocity(35.0, percent);
  RW.setVelocity(35.0, percent);
  LW.spin(reverse);
  RW.spin(forward);
}

// User defined function
void myblockfunction_Elevator_UP() {
}

// User defined function
void myblockfunction_Turn_RIGHT() {
  LW.setVelocity(35.0, percent);
  RW.setVelocity(35.0, percent);
  LW.spin(forward);
  RW.spin(reverse);
}

// "when driver control" hat block
int ondriver_drivercontrol_0() {
  while (true) {
    ElevatorRight.setVelocity(75.0, percent);
    ElevatorLeft.setVelocity(75.0, percent);
    IntakeL.setVelocity(90.0, percent);
    IntakeR.setVelocity(90.0, percent);
    Flipper.setStopping(brake);
    Flipper.setVelocity(73.55, percent);
    LW.setVelocity((Controller1.Axis3.position() + Controller1.Axis1.position()), percent);
    RW.setVelocity((Controller1.Axis3.position() - Controller1.Axis1.position()), percent);
    LW.spin(forward);
    RW.spin(forward);
    if (Controller1.ButtonL2.pressing() || Controller1.ButtonL1.pressing()) {
      if (Controller1.ButtonL1.pressing()) {
        ElevatorRight.spin(forward);
        ElevatorLeft.spin(reverse);
      }
      if (Controller1.ButtonL2.pressing()) {
        ElevatorLeft.spin(forward);
        ElevatorRight.spin(reverse);
      }
    }
    else {
      ElevatorRight.stop();
      ElevatorLeft.stop();
    }
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
    if (Controller1.ButtonA.pressing() || Controller1.ButtonB.pressing()) {
      if (Controller1.ButtonA.pressing()) {
        Flipper.spin(forward);
      }
      if (Controller1.ButtonB.pressing()) {
        Flipper.spin(reverse);
      }
    }
    else {
      Flipper.stop();
    }
  wait(5, msec);
  }
  return 0;
}

// "when autonomous" hat block
int onauton_autonomous_0() {
  myblockfunction_Flipper();
  wait(0.5, seconds);
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
