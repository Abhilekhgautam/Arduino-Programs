int blueLED = 8;

int shortTime = 250;
int longTime  = 700;
int longestTime = 2000;


void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(blueLED, HIGH);
  delay(shortTIme);
  digitalWrite(blueLED,LOW);
  delay(shortTIme);

  digitalWrite(blueLED, HIGH);
  delay(shortTIme);
  digitalWrite(blueLED,LOW);
  delay(shortTIme);

  digitalWrite(blueLED, HIGH);
  delay(shortTIme);
  digitalWrite(blueLED,LOW);
  delay(shortTIme);


  digitalWrite(blueLED, HIGH);
  delay(longTime);
  digitalWrite(blueLED,LOW);
  delay(longTime);

  digitalWrite(blueLED, HIGH);
  delay(longTime);
  digitalWrite(blueLED,LOW);
  delay(longTime);

  digitalWrite(blueLED, HIGH);
  delay(longTime);
  digitalWrite(blueLED,LOW);
  delay(longTime);

  digitalWrite(blueLED, HIGH);
  delay(shortTIme);
  digitalWrite(blueLED,LOW);
  delay(shortTIme);

  digitalWrite(blueLED, HIGH);
  delay(shortTIme);
  digitalWrite(blueLED,LOW);
  delay(shortTIme);

  digitalWrite(blueLED, HIGH);
  delay(shortTIme);
  digitalWrite(blueLED,LOW);
  delay(shortTIme);

  delay(longestTime);


  
}
