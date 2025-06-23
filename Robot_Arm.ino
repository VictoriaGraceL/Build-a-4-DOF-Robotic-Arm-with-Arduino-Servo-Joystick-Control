#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

const int joyA = A0; // X axis of joystick 1
const int joyB = A1; // Y axis of joystick 1
const int joyC = A2; // X axis of joystick 2
const int joyD = A3; // Y axis of joystick 2

const int servoPin1 = 3;
const int servoPin2 = 4;
const int servoPin3 = 6;
const int servoPin4 = 10;

void setup() {
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);
  servo4.attach(servoPin4);
}

void loop() {
  int valA = analogRead(joyA);
  int valB = analogRead(joyB);
  int valC = analogRead(joyC);
  int valD = analogRead(joyD);

  // Map joystick values (0-1023) to servo angles (0-180)
  int angle1 = map(valA, 0, 1023, 0, 180);
  int angle2 = map(valB, 0, 1023, 0, 180);
  int angle3 = map(valC, 0, 1023, 0, 180);
  int angle4 = map(valD, 0, 1023, 0, 180);

  servo1.write(angle1);
  servo2.write(angle2);
  servo3.write(angle3);
  servo4.write(angle4);

  delay(15);
}
