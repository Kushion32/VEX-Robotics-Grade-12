myVariable = 0

def when_started1():
    global myVariable
    Arm.set_velocity(50, PERCENT)
    while True:
        if controller_1.buttonX.pressing():
            Arm.spin(FORWARD)
        else:
            if controller_1.buttonB.pressing():
                Arm.spin(REVERSE)
            else:
                Arm.stop()
        wait(5, MSEC)

def when_started2():
    global myVariable
    while True:
        RightWheel.set_velocity(controller_1.axis1.position(), PERCENT)
        LeftWheel.set_velocity(controller_1.axis1.position(), PERCENT)
        RightWheel.spin(FORWARD)
        LeftWheel.spin(FORWARD)
        wait(5, MSEC)

ws2 = Thread( when_started2 )
when_started1()
