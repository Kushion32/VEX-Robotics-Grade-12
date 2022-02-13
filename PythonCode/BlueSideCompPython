vexcode_visionsensor_objects = None
myVariable = 0

def STOP():
    global myVariable, vexcode_visionsensor_objects
    RB.stop()
    LB.stop()
    IntakeL.stop()
    IntakeR.stop()
    Elevator.stop()

def Intake_IN():
    global myVariable, vexcode_visionsensor_objects
    IntakeL.spin(REVERSE)
    IntakeR.spin(FORWARD)
    IntakeL.set_velocity(100, PERCENT)
    IntakeR.set_velocity(100, PERCENT)

def MOVEFORWARD():
    global myVariable, vexcode_visionsensor_objects
    LB.set_velocity(40, PERCENT)
    RB.set_velocity(40, PERCENT)
    LB.spin(FORWARD)
    RB.spin(FORWARD)

def Forwardfast():
    global myVariable, vexcode_visionsensor_objects
    LB.set_velocity(90, PERCENT)
    RB.set_velocity(90, PERCENT)
    LB.spin(FORWARD)
    RB.spin(FORWARD)

def Intake_OUT():
    global myVariable, vexcode_visionsensor_objects
    IntakeL.spin(FORWARD)
    IntakeR.spin(REVERSE)
    IntakeL.set_velocity(-100, PERCENT)
    IntakeR.set_velocity(100, PERCENT)

def MOVEBACKWARD():
    global myVariable, vexcode_visionsensor_objects
    LB.set_velocity(40, PERCENT)
    RB.set_velocity(40, PERCENT)
    LB.spin(REVERSE)
    RB.spin(REVERSE)

def flywheel_stop():
    global myVariable, vexcode_visionsensor_objects
    Flywheel.stop()
    Flywheel2.stop()

def Flywheel():
    global myVariable, vexcode_visionsensor_objects
    Flywheel.set_velocity(75, PERCENT)
    Flywheel2.set_velocity(75, PERCENT)
    Flywheel2.spin(FORWARD)
    Flywheel.spin(FORWARD)

def Turn_LEFT():
    global myVariable, vexcode_visionsensor_objects
    LB.set_velocity(25, PERCENT)
    RB.set_velocity(25, PERCENT)
    LB.spin(REVERSE)
    RB.spin(FORWARD)

def TurnLeftFast():
    global myVariable, vexcode_visionsensor_objects
    LB.set_velocity(50, PERCENT)
    RB.set_velocity(50, PERCENT)
    LB.spin(REVERSE)
    RB.spin(FORWARD)

def Elevator_UP():
    global myVariable, vexcode_visionsensor_objects
    Elevator.set_velocity(50, PERCENT)
    Elevator.spin(FORWARD)

def Turn_RIGHT():
    global myVariable, vexcode_visionsensor_objects
    LB.set_velocity(25, PERCENT)
    RB.set_velocity(25, PERCENT)
    LB.spin(FORWARD)
    RB.spin(REVERSE)

def TurnRightFast():
    global myVariable, vexcode_visionsensor_objects
    LB.set_velocity(50, PERCENT)
    RB.set_velocity(50, PERCENT)
    LB.spin(FORWARD)
    RB.spin(REVERSE)

def ElevatorUPFAST():
    global myVariable, vexcode_visionsensor_objects
    Elevator.set_velocity(80, PERCENT)
    Elevator.spin(FORWARD)

def Elevator_Down():
    global myVariable, vexcode_visionsensor_objects
    Elevator.set_velocity(20, PERCENT)
    Elevator.spin(REVERSE)

def MOVEBACKWARD_FAST():
    global myVariable, vexcode_visionsensor_objects
    LB.set_velocity(100, PERCENT)
    RB.set_velocity(100, PERCENT)
    LB.spin(REVERSE)
    RB.spin(REVERSE)

def IntakeRightIn():
    global myVariable, vexcode_visionsensor_objects
    IntakeR.set_velocity(-75, PERCENT)
    IntakeR.spin(FORWARD)

def FORWARDSLOW():
    global myVariable, vexcode_visionsensor_objects
    LB.set_velocity(20, PERCENT)
    RB.set_velocity(20, PERCENT)
    LB.spin(FORWARD)
    RB.spin(FORWARD)

def IntakeLeftIn():
    global myVariable, vexcode_visionsensor_objects
    IntakeL.set_velocity(-75, PERCENT)
    IntakeL.spin(REVERSE)

def ForwardRIGHT():
    global myVariable, vexcode_visionsensor_objects
    LB.set_velocity(60, PERCENT)
    RB.set_velocity(20, PERCENT)
    LB.spin(FORWARD)
    RB.spin(FORWARD)

def ondriver_drivercontrol_0():
    global myVariable, vexcode_visionsensor_objects
    while True:
        LB.set_stopping(COAST)
        RB.set_stopping(COAST)
        Flywheel2.set_stopping(BRAKE)
        Antitip.set_velocity(50, PERCENT)
        Flywheel.set_stopping(COAST)
        Flywheel2.set_stopping(COAST)
        IntakeL.set_velocity(100, PERCENT)
        IntakeR.set_velocity(100, PERCENT)
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
        if controller_1.axis1.position() < -50:
            LB.set_velocity((controller_1.axis3.position() + controller_1.axis1.position()), PERCENT)
            RB.set_velocity((controller_1.axis3.position() - controller_1.axis1.position()), PERCENT)
            RB.spin(FORWARD)
            LB.spin(FORWARD)
        if controller_1.axis1.position() > -50:
            LB.set_velocity((controller_1.axis3.position() + controller_1.axis1.position() / 2), PERCENT)
            RB.set_velocity((controller_1.axis3.position() - controller_1.axis1.position() / 2), PERCENT)
            RB.spin(FORWARD)
            LB.spin(FORWARD)
        if controller_1.buttonY.pressing() or controller_1.buttonA.pressing():
            if controller_1.buttonY.pressing():
                Antitip.spin_to_position(85, DEGREES, wait=True)
            if controller_1.buttonA.pressing():
                Antitip.spin_to_position(-5, DEGREES, wait=True)
        else:
            Antitip.stop()
        wait(5, MSEC)

def onauton_autonomous_0():
    global myVariable, vexcode_visionsensor_objects
    pass

def onauton_autonomous_1():
    global myVariable, vexcode_visionsensor_objects
    pass

def onauton_autonomous_2():
    global myVariable, vexcode_visionsensor_objects
    pass

def onauton_autonomous_3():
    global myVariable, vexcode_visionsensor_objects
    LB.set_stopping(BRAKE)
    RB.set_stopping(BRAKE)
    Elevator_Down()
    Flywheel()
    wait(0.9, SECONDS)
    STOP()
    wait(0.01, SECONDS)
    ForwardRIGHT()
    Intake_IN()
    Flywheel()
    wait(0.6, SECONDS)
    STOP()
    wait(0.01, SECONDS)
    ForwardRIGHT()
    Intake_IN()
    Flywheel()
    Elevator_UP()
    wait(0.9, SECONDS)
    STOP()
    wait(0.01, SECONDS)
    Flywheel()
    Elevator_UP()
    wait(0.2, SECONDS)
    STOP()
    wait(0.1, SECONDS)
    LB.set_velocity(30, PERCENT)
    LB.spin(REVERSE)
    RB.set_velocity(65, PERCENT)
    RB.spin(REVERSE)
    wait(1.2, SECONDS)
    STOP()
    wait(0.1, SECONDS)
    TurnRightFast()
    wait(0.49, SECONDS)
    Forwardfast()
    Flywheel()
    wait(0.3, SECONDS)
    Forwardfast()
    Flywheel()
    Elevator_UP()
    wait(0.75, SECONDS)
    STOP()
    wait(0.01, SECONDS)
    TurnLeftFast()
    Flywheel()
    wait(0.3, SECONDS)
    TurnLeftFast()
    Flywheel()
    Elevator_UP()
    wait(0.3, SECONDS)
    STOP()
    wait(0.01, SECONDS)
    Forwardfast()
    Flywheel()
    wait(1, SECONDS)
    STOP()
    wait(0.01, SECONDS)
    Elevator_UP()
    wait(1, SECONDS)
    STOP()
    wait(0.1, SECONDS)
    LB.set_velocity(30, PERCENT)
    LB.spin(REVERSE)
    RB.set_velocity(70, PERCENT)
    RB.spin(REVERSE)
    wait(1.15, SECONDS)
    STOP()
    wait(0.1, SECONDS)
    Forwardfast()
    Intake_IN()
    wait(1.5, SECONDS)
    STOP()
    wait(0.001, SECONDS)
    LB.set_velocity(40, PERCENT)
    LB.spin(FORWARD)
    RB.set_velocity(80, PERCENT)
    RB.spin(FORWARD)
    IntakeLeftIn()
    IntakeRightIn()
    Elevator_UP()
    wait(0.8, SECONDS)
    STOP()
    wait(0.001, SECONDS)
    MOVEFORWARD()
    Elevator_UP()
    wait(1.05, SECONDS)
    STOP()
    wait(0.1, SECONDS)
    Flywheel()
    ElevatorUPFAST()
    wait(1.5, SECONDS)
    STOP()
    wait(0.1, SECONDS)
    MOVEBACKWARD()
    Intake_OUT()
    wait(1, SECONDS)
    STOP()
    flywheel_stop()
    wait(0.1, SECONDS)

def onauton_autonomous_4():
    global myVariable, vexcode_visionsensor_objects
    pass

# create a function for handling the starting and stopping of all autonomous tasks
def vexcode_auton_function():
    # Start the autonomous control tasks
    auton_task_0 = Thread( onauton_autonomous_0 )
    auton_task_1 = Thread( onauton_autonomous_1 )
    auton_task_2 = Thread( onauton_autonomous_2 )
    auton_task_3 = Thread( onauton_autonomous_3 )
    auton_task_4 = Thread( onauton_autonomous_4 )
    # wait for the driver control period to end
    while( competition.is_autonomous() and competition.is_enabled() ):
        # wait 10 milliseconds before checking again
        wait( 10, MSEC )
    # Stop the autonomous control tasks
    auton_task_0.stop()
    auton_task_1.stop()
    auton_task_2.stop()
    auton_task_3.stop()
    auton_task_4.stop()

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
