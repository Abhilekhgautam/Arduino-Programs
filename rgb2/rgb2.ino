int redPin   = A5;
int greenPin = A4;
int bluePin  = A3;

int dt = 250;

void setup() {
  // put your setup code here, to run once:

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i = 0 ; i < 256; ++i){
    analogWrite(redPin, i);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 255);
  
    delay(dt);
  }

}
