int redPin = 11;
int brightnessOne = 1;
int brightnessTwo = 100;
int brightnessThree = 200;
int brightnessFour = 255;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   analogWrite(redPin, brightnessOne);
   delay(100);

   analogWrite(redPin, brightnessTwo);
   delay(100);

   analogWrite(redPin, brightnessThree);
   delay(100);

   analogWrite(redPin, brightnessFour);
   delay(100);
}
