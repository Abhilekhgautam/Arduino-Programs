#include<Servo.h>

int Xpin = A0;
int Ypin = A1;
int Spin = 2;
int servoPin = A2;

int Xval;
int Yval;
int Sval; 
int angle;
int dt = 250;

Servo myServo;
void setup() {
  // put your setup code here, to run once:

   Serial.begin(9600);
   pinMode(Xpin, INPUT);
   pinMode(Ypin, INPUT);
   pinMode(Spin, INPUT);
   digitalWrite(Spin, HIGH);
   myServo.attach(servoPin);

}

void loop() {
  // put your main code here, to run repeatedly:


   Xval = analogRead(Xpin);
   Yval = analogRead(Ypin);
   Sval = digitalRead(Spin);

   delay(dt);

   Serial.print("X = ");
   Serial.print(Xval);
   Serial.print(" Y = ");
   Serial.print(Yval);
   Serial.print(" S = ");
   Serial.println(Sval);

  

   angle = (180.0/1023.0) * Xval;
    if(Sval == 0){
    angle = 0;
   }
   myServo.write(angle);
}
