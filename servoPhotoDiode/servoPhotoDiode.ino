#include <Servo.h>

int diodePin = A3;
int servoPin = 9;

Servo myServo;

int dt = 300;
int angle;
int intensity;
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  myServo.attach(servoPin);

  pinMode(diodePin, OUTPUT);
  pinMode(servoPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

   intensity = analogRead(diodePin);
   Serial.println(intensity);
   delay(dt);

   angle = (160.0/ 77.0) * intensity;

   myServo.write(angle);
}
