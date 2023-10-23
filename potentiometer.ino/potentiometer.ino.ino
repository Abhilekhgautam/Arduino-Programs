int pmPin = A0;
int readVal;
int waitT = 500;

int ledPin = 8;

float V2;

void setup() {
  // put your setup code here, to run once:

   Serial.begin(9600);
   pinMode(ledPin, OUTPUT);
   pinMode(pmPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

   readVal = analogRead(pmPin);

   V2 = ((float)255/1023) * readVal;

   Serial.println(V2);

   analogWrite(ledPin, V2);

   delay(waitT);
}
