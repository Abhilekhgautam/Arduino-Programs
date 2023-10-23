int buzzPin = 8;
int buzzTime = 1;
int buzzTime2 = 10;

void setup() {
  // put your setup code here, to run once:

   pinMode(buzzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

   digitalWrite(buzzPin, HIGH);
   delay(buzzTime);
   digitalWrite(buzzPin, LOW);
   delay(buzzTime);
}
