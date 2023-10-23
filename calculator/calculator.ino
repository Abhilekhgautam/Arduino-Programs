#include <LiquidCrystal.h>
#include <Keypad.h>


const byte ROWS = 4; 
const byte COLS = 4; 

enum symbols{Plus = '+', Minus = '-', Mul = '*', Div = '/', Dot = '.', Equals = '='};

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', Plus},
  {'4', '5', '6', Minus},
  {'7', '8', '9', Mul},
  {Dot, '0', Equals, Div}
};

byte rowPins[ROWS] = {13, A0, A1, 0}; 
byte colPins[COLS] = {12, 11, 10, 9}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 


const int rs = 3, en = 4, d4 = 5, d5= 6, d6 = 7, d7 = 8;

int contrastPin = 2;
int contrast = 60;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


class Calculator{
  public:
  String op1;
  String op2;
  char ope;
  float result;
 
    float add(float num1, float num2){return num1 + num2;}
    float sub(float num1, float num2){return num1 - num2;}
    float mul(float num1, float num2){return num1 * num2;}
    float divide(float num1, float num2){
      if (num2 == 0.0) {
        lcd.println("Math Error");
        }

        return (float)num1 / (float)num2;
      }
    void displayOp(){lcd.println(op1);}
    void displayResult(){
      lcd.setCursor(0,0);
      lcd.println(result);
      }
    void symbolClicked(char key){ope = key;}
  
};

void setup() {
  // put your setup code here, to run once:

 Serial.begin(9600);
 analogWrite(contrastPin, contrast);
 lcd.begin(16, 2);


}

void loop() {
  char key = customKeypad.getKey();

  Calculator calc;
  if(key){
    if (key == Plus || key == Minus || key == Mul || key == Div){
      calc.symbolClicked(key);
    } else if((key != Plus || key != Minus || key != Mul || key != Div) && calc.op1 == ""){
      calc.op1 += key;
    }
    calc.displayOp();
  }

}
