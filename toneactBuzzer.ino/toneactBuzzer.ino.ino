int buzzPin = 8;
int dt1 = 1;
int dt2 = 2;


void setup() {
  // put your setup code here, to run once:

   pinMode(buzzPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

   for(int j = 1 ; j <= 100 ; j++){
    digitalWrite(buzzPin, HIGH);
    delay(dt1);
    digitalWrite(buzzPin, LOW);
    delay(dt1);
   }

   for(int j = 1 ; j <= 100 ; j++){
    digitalWrite(buzzPin, HIGH);
    delay(dt2);
    digitalWrite(buzzPin, LOW);
    delay(dt2);
   }


}
