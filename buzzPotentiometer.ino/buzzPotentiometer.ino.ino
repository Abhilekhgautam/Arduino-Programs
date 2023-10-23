int buzzPin = 8;
int potPin  = A3;

int readVal;

void setup() {
  // put your setup code here, to run once:


   pinMode(potPin, INPUT);
   pinMode(buzzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

    readVal = analogRead(potPin);

    if(readVal > 1000){
      digitalWrite(buzzPin, HIGH);
    }
    else{

      digitalWrite(buzzPin, LOW);
      
      }
}
