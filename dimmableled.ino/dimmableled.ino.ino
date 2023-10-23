int myPin = A3;

int redPin = 9;
int waitTime = 250;
int readVal;

float V2;

void setup() {
  // put your setup code here, to run once:

    pinMode(myPin, INPUT);
    pinMode(redPin, OUTPUT);

    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

   readVal = analogRead(myPin);
   V2 = (255.0/1023.0) * readVal;

   analogWrite(redPin, V2);

   Serial.println(readVal);
}
