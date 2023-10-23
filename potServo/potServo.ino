#include <Servo.h>

int pomPin   =  A4;
int servoPin =  3;
int dt       = 250;

float angle;
int   pomVal;
Servo myServo;
void setup() {
  // put your setup code here, to run once:

    Serial.begin(9600);
    myServo.attach(servoPin);
    pinMode(pomPin, OUTPUT);
    myServo.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:

  pomVal = analogRead(servoPin);
  Serial.print("Resistance:");
  Serial.println(pomVal);
  angle  = (160.0/ 1023.0) * pomVal;
  Serial.print("Angle:");
  Serial.println(angle);
  myServo.write(angle);

  delay(dt);

}
