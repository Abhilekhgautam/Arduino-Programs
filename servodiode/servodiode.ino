#include <Servo.h>

int lightVal;
int lightPin = A4;
int servoPin = 9;


int wt = 250;
int angle;
Servo myServo;
void setup() {
  // put your setup code here, to run once:

     Serial.begin(9600);

     pinMode(lightPin, INPUT);
     pinMode(lightPin, OUTPUT);
     myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:

    lightVal = analogRead(lightPin);
    Serial.println(lightVal);
    delay(wt);

    angle = 10* (lightVal + 10) + 60;

    
    myServo.write(angle);

}
