#include <Wire.h>
#include <LiquidCrystal_I2C.h>

char row1[]="I'm Arduino";
char row2[]="Hello world!"; 
int t = 500;
// Library initialization with 16x2 size settings
LiquidCrystal_I2C lcd(0x27,16,2); // set the LCD address to 0x27

void setup(){
   lcd.init();
   lcd.backlight();
}

void loop()
{
    lcd.clear();
    lcd.setCursor(15,0);
    for (int positionCounter1 = 0; positionCounter1 < 26; positionCounter1++){
        lcd.scrollDisplayLeft(); 
        lcd.print(row1[positionCounter1]); 
        delay(t); 
    }
    lcd.setCursor(15,1); // set the cursor to column 15, line 1
    for (int positionCounter = 0; positionCounter < 26; positionCounter++){
        lcd.scrollDisplayLeft(); 
        lcd.print(row2[positionCounter]); 
        delay(t); 
    }
 }

