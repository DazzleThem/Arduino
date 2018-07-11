/*
 code to run t6612FNG dual channel motor driver
 */

#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"

// Create the motor shield object with the default I2C address
Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 
// Or, create it with a different I2C address (say for stacking)
// Adafruit_MotorShield AFMS = Adafruit_MotorShield(0x61); 

// Select which 'port' M1, M2, M3 or M4. In this case, M1
Adafruit_DCMotor *outerGateMotorPtr = AFMS.getMotor(1);


// X113647 Motor Driver Constants

// Named after inputs on board
const byte LED = 13;

/*
 Inputs pulled high by internal pullups.
 */

/*
 Global Variables
 */
volatile byte outerWaitState;
byte innerWaitState;
volatile byte ledState;
int outerConsecutiveCount;
int innerConsecutiveCount;

void setup() {
  Serial.begin(38400);  
  Serial.println("Gate controller");

  AFMS.begin();  // create with the default frequency 1.6KHz
    
  pinMode(LED, OUTPUT);
  digitalWrite(LED, 1); 
  delay(700);
  digitalWrite(LED, 0);
  delay(300);

  motorOn(outerGateMotorPtr);
  delay(300);
  motorOff(outerGateMotorPtr);
}

void loop() {
  
}  

void motorOn(Adafruit_DCMotor *motorPtr) {
  motorPtr->setSpeed(200); // 255 is full speed
  motowrPtr->run(BACKWARD);
}
void motorOff(Adafruit_DCMotor *motorPtr) {
  motorPtr->run(RELEASE);
}

void ledOff() {
  digitalWrite(LED, 0);
}

void ledOn() {
  digitalWrite(LED, 1);
}
