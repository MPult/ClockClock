#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm1 = Adafruit_PWMServoDriver();
Adafruit_PWMServoDriver pwm2 = Adafruit_PWMServoDriver(0x41);
Adafruit_PWMServoDriver pwm3 = Adafruit_PWMServoDriver(0x42);



#define SERVOMIN  150 // This is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  600 // This is the 'maximum' pulse length count (out of 4096)
#define SERVO_FREQ 50 // Analog servos run at ~50 Hz updates

void setup() {
  // put your setup code here, to run once:
  pwm1.begin();
  pwm2.begin();
  pwm3.begin();
  // pwm1.setOscillatorFrequency(27000000);

  // pwm2.setOscillatorFrequency(27000000);
  pwm1.setPWMFreq(SERVO_FREQ); 
  pwm2.setPWMFreq(SERVO_FREQ); 
  pwm3.setPWMFreq(SERVO_FREQ); 

  delay(10);

}

void loop() {

  for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
    pwm1.setPWM(0, 0, pulselen);
    pwm1.setPWM(1, 0, pulselen);

    pwm2.setPWM(0, 0, pulselen);
    pwm2.setPWM(1, 0, pulselen);

    pwm3.setPWM(0, 0, pulselen);
    pwm3.setPWM(1, 0, pulselen);

  }

    delay(1000);


}
