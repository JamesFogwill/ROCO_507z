#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
#include "movement.h"
#include "Encoder.h"
#include <Arduino.h>


//calls the pca over i2c with default address of 0x40
// this one controls the rolling
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
// this one controls the walking
//Adafruit_PWMServoDriver pwm2 = Adafruit_PWMServoDriver(0x41);

// WILL HAVE TO MODIFY THE I2C PINS FOR THE STM BOARD
//movement mymove(Adafruit_PWMServoDriver);

// init the encoder with the arduino pins its attached too
EncoderFunctions Encoder1(2,3);

void setup() {

  Serial.begin(9600);
  Serial.println("Motor Test");

  // inits the pwm driver for i2c
  pwm.begin();

  // speak to jake about this
  pwm.setOscillatorFrequency(23500000);
  pwm.setPWMFreq(1600);  // This is the maximum PWM frequency

}

void loop() {

  
  pwm.setPWM(0,4096,0);
  pwm.setPWM(1,0,4096);
  //delay(1000);
  //pwm.setPWM(1,0,4096);
  //pwm.setPWM(0,4096,0);
  delay(5000);
  //pwm.setPWM(0,0,4096);
  //pwm.setPWM(1,1000,0);

  
}



