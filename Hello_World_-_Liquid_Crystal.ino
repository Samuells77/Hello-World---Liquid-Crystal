
// include the library code:

#include <LiquidCrystal.h>


// initialize the library by associating any needed LCD interface pin

// with the arduino pin number it is connected to

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {

  // set up the LCD's number of columns and rows:

  lcd.begin(16, 2);

}


void loop() {
   for (int i = 0; i <= 32; i++) {
     lcd.setCursor(i-13, 0);
     lcd.print("h");
     lcd.setCursor(i-12, 0);
     lcd.print("e");
     lcd.setCursor(i-11, 0);
     lcd.print("l");
     lcd.setCursor(i-10, 0);
     lcd.print("l");
     lcd.setCursor(i-9, 0);
     lcd.print("o");
     lcd.setCursor(i-8, 0);
     lcd.print(",");
     lcd.setCursor(i-7, 0);
     lcd.print(" ");
     lcd.setCursor(i-6, 0);
     lcd.print("w");
     lcd.setCursor(i-5, 0);
     lcd.print("o");
     lcd.setCursor(i-4, 0);
     lcd.print("r");
     lcd.setCursor(i-3, 0);
     lcd.print("l");
     lcd.setCursor(i-2, 0);
     lcd.print("d");
     lcd.setCursor(i-1, 0);
     lcd.print("!");
     delay(800);
     lcd.clear();
   }

}
