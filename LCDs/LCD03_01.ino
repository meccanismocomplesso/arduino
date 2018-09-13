#include <LCD03.h>

LCD03 lcd;

void setup() {
 // put your setup code here, to run once:
 lcd.begin(16, 2);
 lcd.backlight();
 lcd.clear();
}

void loop() {
 // put your main code here, to run repeatedly:
 lcd.home();
 lcd.print("I'm Arduino!");
 lcd.newLine();
 lcd.print("Hello world!");
}


