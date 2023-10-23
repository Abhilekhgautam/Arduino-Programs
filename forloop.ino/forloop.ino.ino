int redPin = 9;
int bluePin = 6;

int waitTime = 500;

void setup() {
  // put your setup code here, to run once:

   pinMode(redPin, OUTPUT);
   pinMode(bluePin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

   for(int i = 0 ; i < 3 ; i++){
    digitalWrite(bluePin, HIGH);
    delay(waitTime);

    digitalWrite(bluePin, LOW);
    delay(waitTime);
   }

   for(int i = 0 ; i < 5 ; i++){
    digitalWrite(redPin, HIGH);
    delay(waitTime);

    digitalWrite(redPin, LOW);
    delay(waitTime);
   }

}
