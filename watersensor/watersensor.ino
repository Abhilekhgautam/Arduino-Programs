int waterSignal = A2;
int waterPin    = 9;

int ledPin      = 2;

int thresholdVal = 580.0/2.0;

int readVal;
void setup() {
  // put your setup code here, to run once:

    Serial.begin(9600);
    pinMode(waterPin, OUTPUT);
    digitalWrite(waterPin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(waterPin, HIGH);
   delay(10);
   
   readVal = analogRead(waterSignal);
   digitalWrite(waterPin, LOW);

   Serial.print("Sensor Value: ");
   Serial.println(readVal);

   if(readVal > thresholdVal){
    digitalWrite(ledPin, HIGH);
   }
   else{
    digitalWrite(ledPin, LOW);
   }

}
