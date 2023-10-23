#include <Servo.h>
int lightVal;
int lightPin = A3;
int dt = 250;
int servoPin = 9;
Servo myServo;
float angle;

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   myServo.attach(servoPin);
   pinMode(lightPin, INPUT);
   pinMode(servoPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
   lightVal = analogRead(lightPin);
   Serial.println(lightVal);

   angle = -16.0/63.0 * lightVal + ((16.0 * 200)/63);

   myServo.write(angle);
}
