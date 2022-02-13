myVariable = 0

def when_started1():
    global myVariable
    while True:
        Leftfront.set_velocity((controller_1.axis3.position() + controller_1.axis1.position()), PERCENT)
        Rightfront.set_velocity((controller_1.axis3.position() - controller_1.axis1.position()), PERCENT)
        Leftfront.spin(FORWARD)
        Rightfront.spin(FORWARD)
        leftback.set_velocity((controller_1.axis3.position() + controller_1.axis1.position()), PERCENT)
        rightback.set_velocity((controller_1.axis3.position() - controller_1.axis1.position()), PERCENT)
        leftback.spin(FORWARD)
        rightback.spin(FORWARD)
        if controller_1.buttonL1.pressing() or controller_1.buttonL2.pressing():
            if controller_1.buttonL1.pressing():
                ArmMotor.set_velocity(50, PERCENT)
                ArmMotor.spin(FORWARD)
            if controller_1.buttonL2.pressing():
                ArmMotor.set_velocity(50, PERCENT)
                ArmMotor.spin(REVERSE)
        else:
            ArmMotor.stop()
        if controller_1.buttonR1.pressing() or controller_1.buttonR2.pressing():
            if controller_1.buttonR1.pressing():
                ClawMotor.set_velocity(50, PERCENT)
                ClawMotor.spin(FORWARD)
            if controller_1.buttonR2.pressing():
                ClawMotor.set_velocity(50, PERCENT)
                ClawMotor.spin(REVERSE)
        else:
            ClawMotor.stop()
        wait(5, MSEC)

when_started1()
