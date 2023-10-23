int redPin = 8;
int greenPin = 9;
int bluePin  = 12;

int waitTime = 500;

void setup() {
  // put your setup code here, to run once:


   pinMode(redPin, OUTPUT);
   pinMode(greenPin, OUTPUT);
   pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


   digitalWrite(redPin, HIGH);
   delay(waitTime);

   digitalWrite(redPin, LOW);
   delay(waitTime);

}
