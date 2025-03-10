#define LED2 9

#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioclass/hd44780_I2Cexp.h>
hd44780_I2Cexp lcd(0x29, I2Cexp_MCP23008,7,5,4,3,2,1,HIGH);


void setup() {
  pinMode(LED2, OUTPUT);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("MIC:");
  

}

void loop() {
 
int mic = analogRead(A0);
lcd.setCursor(0,1);
lcd.print(mic);
if (mic > 250){
  digitalWrite(LED2, HIGH);
  }
else {
  digitalWrite(LED2, LOW);
  }




}
