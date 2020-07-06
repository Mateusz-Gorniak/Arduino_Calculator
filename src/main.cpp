#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
char x[6] = {'t', 'e', 'k', 's', 't'};
void setup()
{
  lcd.begin(16, 2);
}
void loop()
{
  for (int i = 0; i < 12; i++)
  {
    lcd.setCursor(i, 0);
    lcd.print(x);
    delay(1000);
    lcd.clear();
  }
  for (int j = 0; j < 12; j++)
  {
    lcd.setCursor((11 - j), 1);
    lcd.print(x);
    delay(1000);
    lcd.clear();
  }
}