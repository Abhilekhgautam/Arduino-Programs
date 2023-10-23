int ledPin = 8;
int soundAPin = A4;
int soundDPin = 3;


int dt = 100;

int sVal;

void setup() {
  // put your setup code here, to run once:

    pinMode(soundAPin, INPUT);
    pinMode(soundDPin, INPUT);
    pinMode(ledPin, OUTPUT);

    Serial.begin(9600);

    
}

void loop() {
  // put your main code here, to run repeatedly:

  sVal = analogRead(soundAPin);
  delay(dt);

  Serial.println(sVal);

  if(sVal >= 100){
     digitalWrite(ledPin, HIGH);
     delay(dt);
  } else {
    digitalWrite(ledPin, LOW);
  }

}
