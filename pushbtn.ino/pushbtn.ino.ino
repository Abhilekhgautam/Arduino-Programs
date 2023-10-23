int ledPin = 9;
int btnPin = 13;

int wait = 100;

int btnRead;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(btnPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  btnRead = digitalRead(btnPin);

  Serial.println(btnRead);
  delay(wait); 
   
   if(btnRead == 0){
    digitalWrite(ledPin, LOW);
    Serial.println("I am one");
   }
   if (btnRead == 1){
    digitalWrite(ledPin, HIGH);
    Serial.println("I am Zero");
   }
  
  
}
