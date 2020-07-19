#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}
void loop() {
        lcd.setCursor(0, 0);
        lcd.print("Manish");

        lcd.setCursor(7, 0);
        lcd.print("Pamnani");
     
        lcd.setCursor(0, 1);
        lcd.print("Arduino");
     
        lcd.setCursor(7, 1);
        lcd.print("Tutorial");
        delay(10000);
      }
