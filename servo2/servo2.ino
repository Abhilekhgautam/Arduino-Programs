#include <Servo.h>
int servoPin = 9;

int angle1 = 0;
int angle2 = 45;
int angle3 = 90;
int angle4 = 160;

Servo myServo;

int dt = 300;

void setup() {
  // put your setup code here, to run once:

   myServo.attach(servoPin);

}

void loop() {
  // put your main code here, to run repeatedly:

  myServo.write(angle1);
  delay(dt);
  myServo.write(angle2);
  delay(dt);
  myServo.write(angle3);
  delay(dt);
  myServo.write(angle4);
  delay(dt);
  myServo.write(angle3);
  delay(dt);
  myServo.write(angle2);
  delay(dt);
  myServo.write(angle1);
  delay(dt);

}
