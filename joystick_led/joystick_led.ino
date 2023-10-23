int ledPin = 7;
int xPin   = A4;
int yPin   = A5;
int sPin  = 2;

int xVal;
int yVal;
int sVal;
void setup() {
  // put your setup code here, to run once:

   Serial.begin(9600);

    pinMode(ledPin, OUTPUT);
    pinMode(xPin,   INPUT);
    pinMode(yPin,   INPUT);
    pinMode(sPin,   INPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:

   xVal = analogRead(xPin);
   yVal = analogRead(yPin);
   sVal = digitalRead(sPin);

   delay(500);

   Serial.println(sVal);

   if (sVal == 1){
    digitalWrite(ledPin, HIGH);
    delay(500);
   } else{
    digitalWrite(ledPin, LOW);
   }

 
}
