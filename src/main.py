from board import SCL, SDA
import busio
import adafruit_motor.servo
from adafruit_pca9685 import PCA9685

# Create the I2C bus interface.
i2c_bus = busio.I2C(SCL, SDA)

# Create a simple PCA9685 class instance.
pwm0 = PCA9685(i2c_bus)

pwm0.frequency = 50


