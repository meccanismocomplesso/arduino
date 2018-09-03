#include <LCD03.h>
LCD03 lcd;

void setup() {
 // put your setup code here, to run once:
 lcd.begin(16, 2);
 lcd.backlight();
 reset();
}

void loop() {
 // Read the current state of the keypad
 uint16_t keystate = lcd.readKeypad();

if(keystate == KEYPAD_1) {
 lcd.clear();
 lcd.home();
 lcd.print("Button1 pressed!");
 delay(1000);
 reset();
 }

if(keystate == KEYPAD_2) {
 lcd.clear();
 lcd.home();
 lcd.print("Button2 pressed!");
 delay(1000);
 reset();
 }
}

void reset(){
 lcd.clear();
 lcd.home();
 lcd.print("I'm ready!");
}


