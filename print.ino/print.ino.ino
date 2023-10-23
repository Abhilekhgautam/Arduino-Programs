int j = 1;
int waitTime = 750;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

   Serial.println(j);

   j = j + 1;

   delay(waitTime);

}
