int rPin = A2;
int gPin = A3;
int bPin = A1;

int wTime = 500;
void setup() {
  // put your setup code here, to run once:
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);
}

void loop() {

     analogWrite(rPin, 100);
     analogWrite(gPin, 100);
     analogWrite(bPin, 100);

     delay(wTime);
  // put your main code here, to run repeatedly:
//    for(int i = 0 ; i < 256 ; ++i){
//      for(int j = 0 ; j < 256 ; ++j){
//        for(int k = 0 ; k < 256; ++k){
//          analogWrite(rPin, i);
//          delay(wTime);
//          analogWrite(gPin, j);
//          delay(wTime);
//          analogWrite(bPin, k);
//          delay(wTime);
//        }
//      }
//    }
}
