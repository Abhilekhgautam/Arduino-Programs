int myNumb;
int buzzPin = 8;

int buzzTime = 1000;

String msg = "Please Input Your Number";
void setup() {
  // put your setup code here, to run once:

   Serial.begin(9600);
   pinMode(buzzPin, OUTPUT);
   

}

void loop() {
  // put your main code here, to run repeatedly:

   Serial.println(msg);

   while(Serial.available() == 0){}

   myNumb = Serial.parseInt();

   if(myNumb > 10){
    digitalWrite(buzzPin, HIGH);

    delay(buzzTime);

    digitalWrite(buzzPin, LOW);
   }
}
