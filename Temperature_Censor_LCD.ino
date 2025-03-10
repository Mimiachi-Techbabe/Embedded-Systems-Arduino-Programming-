#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>
hd44780_I2Cexp lcd(0x20, I2Cexp_MCP23008,7,6,5,4,3,2,1,HIGH);
void setup() {
lcd.begin(16, 2);
lcd.setCursor(0, 0);
lcd.print("TEMP [C]:");
}
void loop() {
int temp = analogRead(A2);
lcd.setCursor(0, 1);
temp = (int)(temp*0.125 -22.0);
lcd.print(temp);
delay(200);
lcd.setCursor(0, 1);
lcd.print(" ");
}
