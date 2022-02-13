myVariable = 0

def STOP():
    global myVariable
    RB.stop()
    LB.stop()
    IntakeL.stop()
    IntakeR.stop()
    Flywheel.stop()
    Elevator.stop()
    Flywheel2.stop()

def Intake_IN():
    global myVariable
    IntakeL.spin(REVERSE)
    IntakeR.spin(FORWARD)
    IntakeL.set_velocity(75, PERCENT)
    IntakeR.set_velocity(75, PERCENT)

def MOVEFORWARD():
    global myVariable
    LB.set_velocity(40, PERCENT)
    RB.set_velocity(40, PERCENT)
    LB.spin(FORWARD)
    RB.spin(FORWARD)

def Intake_OUT():
    global myVariable
    IntakeL.spin(FORWARD)
    IntakeR.spin(REVERSE)
    IntakeL.set_velocity(-100, PERCENT)
    IntakeR.set_velocity(100, PERCENT)

def MOVEBACKWARD():
    global myVariable
    LB.set_velocity(40, PERCENT)
    RB.set_velocity(40, PERCENT)
    LB.spin(REVERSE)
    RB.spin(REVERSE)

def Flywheel():
    global myVariable
    Flywheel.set_velocity(75, PERCENT)
    Flywheel2.set_velocity(75, PERCENT)
    Flywheel2.spin(FORWARD)
    Flywheel.spin(FORWARD)

def Turn_LEFT():
    global myVariable
    LB.set_velocity(25, PERCENT)
    RB.set_velocity(25, PERCENT)
    LB.spin(REVERSE)
    RB.spin(FORWARD)

def Elevator_UP():
    global myVariable
    Elevator.set_velocity(50, PERCENT)
    Elevator.spin(FORWARD)

def Turn_RIGHT():
    global myVariable
    LB.set_velocity(25, PERCENT)
    RB.set_velocity(25, PERCENT)
    LB.spin(FORWARD)
    RB.spin(REVERSE)

def Elevator_Down():
    global myVariable
    Elevator.set_velocity(20, PERCENT)
    Elevator.spin(REVERSE)

def MOVEBACKWARD_FAST():
    global myVariable
    LB.set_velocity(100, PERCENT)
    RB.set_velocity(100, PERCENT)
    LB.spin(REVERSE)
    RB.spin(REVERSE)

def FORWARDSLOW():
    global myVariable
    LB.set_velocity(20, PERCENT)
    RB.set_velocity(20, PERCENT)
    LB.spin(FORWARD)
    RB.spin(FORWARD)

def ForwardRIGHT():
    global myVariable
    LB.set_velocity(60, PERCENT)
    RB.set_velocity(20, PERCENT)
    LB.spin(FORWARD)
    RB.spin(FORWARD)

def ondriver_drivercontrol_0():
    global myVariable
    while True:
        Flywheel.set_stopping(COAST)
        Flywheel2.set_stopping(COAST)
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
            Flywheel2.set_velocity(69, PERCENT)
            Flywheel.set_velocity(69, PERCENT)
            Flywheel.spin(FORWARD)
            Flywheel2.spin(FORWARD)
        if controller_1.buttonDown.pressing():
            Flywheel.stop()
            Flywheel2.stop()
        if controller_1.buttonRight.pressing():
            Flywheel2.set_velocity(4, PERCENT)
            Flywheel2.set_velocity(4, PERCENT)
            Flywheel2.spin(REVERSE)
            Flywheel.spin(REVERSE)
        if controller_1.buttonR2.pressing() or controller_1.buttonR1.pressing():
            if controller_1.buttonR2.pressing():
                IntakeL.spin(REVERSE)
                IntakeR.spin(FORWARD)
            if controller_1.buttonR1.pressing():
                IntakeL.spin(FORWARD)
                IntakeR.spin(REVERSE)
        else:
            IntakeL.stop()
            IntakeR.stop()
        if controller_1.axis1.position() < 50:
            LB.set_velocity((controller_1.axis3.position() + controller_1.axis1.position() / 2), PERCENT)
            RB.set_velocity((controller_1.axis3.position() - controller_1.axis1.position() / 2), PERCENT)
            RB.spin(FORWARD)
            LB.spin(FORWARD)
        if controller_1.axis1.position() > 50:
            LB.set_velocity((controller_1.axis3.position() + controller_1.axis1.position()), PERCENT)
            RB.set_velocity((controller_1.axis3.position() - controller_1.axis1.position()), PERCENT)
            RB.spin(FORWARD)
            LB.spin(FORWARD)
        wait(5, MSEC)

def onauton_autonomous_0():
    global myVariable
    pass

def onauton_autonomous_1():
    global myVariable
    Elevator_Down()
    Flywheel()
    wait(1.1, SECONDS)
    STOP()
    wait(0.1, SECONDS)
    ForwardRIGHT()
    Intake_IN()
    wait(1.2, SECONDS)
    STOP()
    wait(0.1, SECONDS)
    MOVEFORWARD()
    wait(0.3, SECONDS)
    STOP()
    wait(0.1, SECONDS)
    Flywheel()
    wait(1, SECONDS)
    Flywheel()
    Elevator_UP()
    wait(2, SECONDS)
    STOP()
    wait(0.1, SECONDS)
    Intake_IN()
    Elevator_UP()
    wait(1, SECONDS)
    STOP()
    wait(0.1, SECONDS)
    MOVEBACKWARD_FAST()
    wait(1.1, SECONDS)
    STOP()
    wait(0.1, SECONDS)
    Turn_RIGHT()
    wait(1.5, SECONDS)
    STOP()
    wait(0.1, SECONDS)
    MOVEFORWARD()
    Elevator_UP()
    wait(0.8, SECONDS)
    STOP()
    wait(0.1, SECONDS)
    FORWARDSLOW()
    wait(0.6, SECONDS)
    STOP()
    wait(0.1, SECONDS)
    Flywheel()
    wait(1, SECONDS)
    Flywheel()
    Elevator_UP()
    wait(2, SECONDS)
    STOP()
    wait(0.1, SECONDS)

# create a function for handling the starting and stopping of all autonomous tasks
def vexcode_auton_function():
    # Start the autonomous control tasks
    auton_task_0 = Thread( onauton_autonomous_0 )
    auton_task_1 = Thread( onauton_autonomous_1 )
    # wait for the driver control period to end
    while( competition.is_autonomous() and competition.is_enabled() ):
        # wait 10 milliseconds before checking again
        wait( 10, MSEC )
    # Stop the autonomous control tasks
    auton_task_0.stop()
    auton_task_1.stop()

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
