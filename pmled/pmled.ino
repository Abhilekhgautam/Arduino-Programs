int ledPin = A1;;
int potPin = A4;

int dt = 250;
int resistance;

float val;
void setup() {
  // put your setup code here, to run once:
 
  pinMode(ledPin, OUTPUT);
  pinMode(potPin,INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  resistance = analogRead(potPin);

  Serial.println(resistance);


  val = (255.0/1023.0) * resistance;

  analogWrite(ledPin, val);

   delay(dt);
}
