import Rpi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BOARD)
GPIO.setup(13,GPIO.OUT)
GPIO.setup(8,GPIO.IN)

While True:
    value = GPIO.input(8)
    if value==False:
        GPIO.output(13,True)
        time.sleep(0.5)
        GPIO.output(13,False)
        time.sleep(0.5)
    else if value==True:
        GPIO.output(13,True)
