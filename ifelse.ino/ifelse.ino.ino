int myPin = A2;
int readVal;

float V;
int waitTime = 250;

int redPin   = 9;
int bluePin  = 5;

void setup() {
  // put your setup code here, to run once:

   Serial.begin(9600);

   pinMode(myPin, INPUT);
   pinMode(redPin, OUTPUT);
   pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

   readVal = analogRead(myPin);
   V       = (5.0/1023.0) * readVal;

   Serial.print("Potentiometer voltage is: ");
   Serial.println(V);

   if (V > 4.0){

      digitalWrite(redPin, HIGH);
      digitalWrite(bluePin, LOW);
    
   }

   if(V < 4.0){
    
       digitalWrite(redPin, LOW);
       digitalWrite(bluePin, HIGH);
    
   }

   delay(waitTime);

}
