#include <LiquidCrystal.h>
#include <DHT.h>

#define DHTTYPE DHT11
const int DHTPIN  = 8;

int Contrast = 60; // setup the brighness

// LiquidCrystal lcd(RS, E, D4, D5, D6, D7);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

DHT dht(DHTPIN, DHTTYPE);

void setup()
{
 
  analogWrite(6, Contrast);
  lcd.begin(16, 2);
  dht.begin();
 
}
void loop()
{

   delay(500);

   float h = dht.readHumidity();
   float t = dht.readTemperature();

   lcd.setCursor(0, 0);
   lcd.print("Temp:");
   lcd.print(t);
   lcd.print(" C");

   lcd.setCursor(0, 1);
   lcd.print("Humidity:");
   lcd.print(h);
}
