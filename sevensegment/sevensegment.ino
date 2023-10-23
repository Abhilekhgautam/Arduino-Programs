#define A 8
#define B 7
#define C 6
#define D 5
#define E 4
#define F 3
#define G 2
#define DP 9 // decimal
#define common_cathode 0
#define common_anode 1
bool segMode = common_cathode; // set this to your segment type, my segment is common_cathode
int seg[] {A,B,C,D,E,F,G,DP}; // segment pins
byte chars = 20; // max value in the array "Chars"

byte Chars[20][9] { 
            {'0',1,1,1,1,1,1,1,0},//0
            {'1',0,1,1,0,0,0,0,0},//1
            {'2',1,1,0,1,1,0,1,1},//2
            {'3',1,1,1,1,0,0,1,1},//3
            {'4',0,1,1,0,0,1,1,1},//4
            {'5',1,0,1,1,0,1,1,1},//5
            {'6',1,0,1,1,1,1,1,1},//6
            {'7',1,1,1,0,0,0,0,0},//7
            {'8',1,1,1,1,1,1,1,1},//8
            {'9',1,1,1,1,0,1,1,1},//9
            {'a',1,1,1,0,1,1,1,1},//A/10
            {'b',0,0,1,1,1,1,1,1},//b/11
            {'c',1,0,0,1,1,1,0,0},//C/12
            {'d',0,1,1,1,1,0,1,1},//d/13
            {'e',1,0,0,1,1,1,1,1},//E/14
            {'f',1,0,0,0,1,1,1,1},//F/15
            {'g',1,0,1,1,1,1,0,1},//G/16
            {'h',0,1,1,0,1,1,1,1},//H/17
            {'i',0,0,0,0,1,1,0,0},//I/18
            {'j',0,1,1,1,1,0,0,0},//J/19
            
            };

void setup() {
  // set segment pins as OUTPUT
pinMode(seg[0],OUTPUT);
pinMode(seg[1],OUTPUT);
pinMode(seg[2],OUTPUT);
pinMode(seg[3],OUTPUT);
pinMode(seg[4],OUTPUT);
pinMode(seg[5],OUTPUT);
pinMode(seg[6],OUTPUT);
pinMode(seg[7],OUTPUT);

}



void setState(bool mode) //sets the hole segment state to "mode"
{ for(int i = 0;i<=6;i++)
{
  digitalWrite(seg[i],mode);
}
}



void Print(char Char) // print any character on the segment ( Note : you can't use capital characters )
{ 
  int charNum = -1;// set search resault to -1
  setState(segMode);//turn off the segment
  
for(int i = 0; i < chars ;i++){//search for the enterd character
  if(Char == Chars[i][0]){//if the character found
    charNum = i;//set the resault number into charNum ( because this function prints the character using it's number in the array )
  }
}
 
if(charNum == -1 )// if the character not found
{
  for(int i = 0;i <= 6;i++)
  {
  digitalWrite(seg[i],HIGH);
  delay(100);
  digitalWrite(seg[i],LOW);
  }
  for(int i = 0;i <= 2;i++)
{
  delay(100);
  setState(HIGH);
  delay(100);
  setState(LOW); 
}
}else // else if the character found print it
 {
for(int i = 0;i<8;i++)
    {digitalWrite(seg[i],Chars[charNum][i+1]);
    }
 }

}

void Print(int num) // print any number on the segment
{ 
  setState(segMode);//turn off the segment
  

 
if(num > chars || num < 0 )// if the number is not declared
{
  for(int i = 0;i <= 6;i++)
  {
  digitalWrite(seg[i],HIGH);
  delay(100);
  digitalWrite(seg[i],LOW);
  }
  for(int i = 0;i <= 2;i++)
{
  delay(100);
  setState(HIGH);
  delay(100);
  setState(LOW); 
}
}else // else if the number declared, print it
 {
  if(segMode == 0){ //for segment mode
for(int i = 0;i<8;i++)
    {digitalWrite(seg[i],Chars[num][i+1]);
    }
 }
 else{
  for(int i = 0;i<8;i++)
    {digitalWrite(seg[i],!Chars[num][i+1]);
    }
 }
 }
}

void loop() {
 
  
   for(int i = 0;i < chars;i++) //print
  {
    Print(i);
   delay(1000);
  }
 

  //Print(number or character); // print any number or character on the segment ( Note : you can't use capital characters )
  //setState(state); //sets the hole segment state to "state"

}

    
  
