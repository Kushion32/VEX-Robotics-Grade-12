myVariable = 0

def Start():
    global myVariable
    pass

def Intake_IN():
    global myVariable
    IntakeL.spin(REVERSE)
    IntakeR.spin(FORWARD)
    IntakeL.set_velocity(75, PERCENT)
    IntakeR.set_velocity(75, PERCENT)

def MOVEFORWARD():
    global myVariable
    pass

def STOP():
    global myVariable
    pass

def Intake_OUT():
    global myVariable
    IntakeL.spin(FORWARD)
    IntakeR.spin(REVERSE)
    IntakeL.set_velocity(100, PERCENT)
    IntakeR.set_velocity(-100, PERCENT)

def MOVEBACKWARD():
    global myVariable
    pass

def Flywheel():
    global myVariable
    pass

def Turn_LEFT():
    global myVariable
    pass

def Elevator_UP():
    global myVariable
    Elevator.set_velocity(50, PERCENT)
    Elevator.spin(FORWARD)

def Turn_RIGHT():
    global myVariable
    pass

def onauton_autonomous_0():
    global myVariable
    Start()
    wait(0.1, SECONDS)
    Intake_OUT()
    wait(3, SECONDS)
    STOP()
    wait(0.1, SECONDS)
    MOVEFORWARD()
    wait(0.64, SECONDS)
    STOP()
    wait(0.1, SECONDS)
    Turn_LEFT()
    wait(1.53, SECONDS)
    STOP()
    wait(0.1, SECONDS)
    MOVEFORWARD()
    Elevator_UP()
    Intake_IN()
    wait(0.8, SECONDS)
    STOP()
    wait(0.1, SECONDS)
    Flywheel()
    wait(1, SECONDS)
    Elevator_UP()
    Flywheel()
    wait(3, SECONDS)
    STOP()
    wait(2, SECONDS)
    Intake_OUT()
    wait(1, SECONDS)
    MOVEBACKWARD()
    Intake_OUT()
    wait(1, SECONDS)
    STOP()
    wait(0.1, SECONDS)

def ondriver_drivercontrol_0():
    global myVariable
    while True:
        Flywheel.set_stopping(COAST)
        Flywheel.set_velocity(65, PERCENT)
        IntakeL.set_velocity(75, PERCENT)
        IntakeR.set_velocity(75, PERCENT)
        Elevator.set_velocity(75, PERCENT)
        if controller_1.buttonL2.pressing() or controller_1.buttonL1.pressing():
            if controller_1.buttonL1.pressing():
                Elevator.spin(FORWARD)
            if controller_1.buttonL2.pressing():
                Elevator.spin(REVERSE)
        else:
            Elevator.stop()
        if controller_1.buttonUp.pressing():
            Flywheel.spin(FORWARD)
        if controller_1.buttonDown.pressing():
            Flywheel.stop()
        if controller_1.buttonR2.pressing() or controller_1.buttonR1.pressing():
            if controller_1.buttonR1.pressing():
                IntakeL.spin(REVERSE)
                IntakeR.spin(FORWARD)
            if controller_1.buttonR2.pressing():
                IntakeL.spin(FORWARD)
                IntakeR.spin(REVERSE)
        else:
            IntakeL.stop()
            IntakeR.stop()
        LF.set_velocity(((controller_1.axis3.position() + controller_1.axis1.position()) + controller_1.axis4.position()), PERCENT)
        RF.set_velocity(((controller_1.axis3.position() - controller_1.axis1.position()) - controller_1.axis4.position()), PERCENT)
        LB.set_velocity(((controller_1.axis3.position() + controller_1.axis1.position()) - controller_1.axis4.position()), PERCENT)
        RB.set_velocity(((controller_1.axis3.position() - controller_1.axis1.position()) + controller_1.axis4.position()), PERCENT)
        RB.spin(FORWARD)
        LB.spin(FORWARD)
        LF.spin(FORWARD)
        RF.spin(FORWARD)
        wait(5, MSEC)

# create a function for handling the starting and stopping of all autonomous tasks
def vexcode_auton_function():
    # Start the autonomous control tasks
    auton_task_0 = Thread( onauton_autonomous_0 )
    # wait for the driver control period to end
    while( competition.is_autonomous() and competition.is_enabled() ):
        # wait 10 milliseconds before checking again
        wait( 10, MSEC )
    # Stop the autonomous control tasks
    auton_task_0.stop()

def vexcode_driver_function():
    # Start the driver control tasks
    driver_control_task_0 = Thread( ondriver_drivercontrol_0 )
    # wait for the driver control period to end
    while( competition.is_driver_control() and competition.is_enabled() ):
        # wait 10 milliseconds before checking again
        wait( 10, MSEC )
    # Stop the driver control tasks
    driver_control_task_0.stop()

# register the competition functions
competition = Competition( vexcode_driver_function, vexcode_auton_function )
