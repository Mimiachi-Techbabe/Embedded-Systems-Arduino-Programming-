#include "Adafruit_MCP23008.h"
Adafruit_MCP23008 seg7;

# define left_bt 4
# define down_bt 5
#define middle_bt 8
#define up_bt 6
#define right_bt 7

int BUZ = 2;

#include<Adafruit_SSD1306.h>
Adafruit_SSD1306 display(NULL);


void setup() {
  // put your setup code here, to run once:
   pinMode(left_bt,INPUT);
   pinMode(down_bt,INPUT);
   pinMode(up_bt,INPUT);
   pinMode(right_bt,INPUT);
   pinMode(middle_bt,INPUT);


    seg7.begin(0x24);
  seg7.pinMode(0, OUTPUT);
  seg7.pinMode(7, OUTPUT);
  seg7.pinMode(1, OUTPUT);
  seg7.pinMode(3, OUTPUT);
  seg7.pinMode(6, OUTPUT);
//  seg7.pinMode(4, OUTPUT);
  seg7.pinMode(2, OUTPUT);
  seg7.pinMode(5, OUTPUT);
  
  seg7.begin(0x24);
  seg7.pinMode(0, OUTPUT);
  seg7.pinMode(7, OUTPUT);
  seg7.pinMode(1, OUTPUT);
  seg7.pinMode(3, OUTPUT);
  seg7.pinMode(6, OUTPUT);
  seg7.pinMode(4, OUTPUT);
  seg7.pinMode(2, OUTPUT);
  seg7.pinMode(5, OUTPUT);
  pinMode(BUZ,OUTPUT);

  display.begin(SSD1306_SWITCHCAPVCC, 0X3C, false);
 delay(500);
 display.clearDisplay();
 display.setTextColor(WHITE);
 display.setTextSize(2);
 display.setCursor(0,0);
 display.println("TEST LINE 1");
 display.setCursor(50,10);
 display.println("TEST LINE 2");
 display.display();
 delay(2000);

}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead (middle_bt)==HIGH){
// digitalWrite (led,HIGH);
seg7.digitalWrite(0,HIGH);
    seg7.digitalWrite(1,HIGH);
 seg7.digitalWrite(3,HIGH);
   seg7.digitalWrite(6,HIGH);
  seg7.digitalWrite(5,HIGH);
    seg7.digitalWrite(7,HIGH);
seg7.digitalWrite(2,HIGH);
delay(1000);
 seg7.digitalWrite(0,LOW);
    seg7.digitalWrite(1,LOW);
 seg7.digitalWrite(3,LOW);
   seg7.digitalWrite(6,LOW);
  seg7.digitalWrite(5,LOW);
    seg7.digitalWrite(7,LOW);
seg7.digitalWrite(2,LOW);
delay(1000);
digitalWrite(BUZ, HIGH);
delay(1000);
}

 else {(digitalRead (right_bt)==HIGH); 
  seg7.digitalWrite(0,LOW);
    seg7.digitalWrite(1,LOW);
   seg7.digitalWrite(3,LOW);
   seg7.digitalWrite(6,LOW);
  seg7.digitalWrite(5,LOW);
    seg7.digitalWrite(7,LOW);
seg7.digitalWrite(2,LOW);
delay(1000);

digitalWrite (BUZ,LOW);
 
   }

//else if (digitalRead (up_bt)==HIGH){
//for (int i = 0; i < 8; i++);
//    display.clearDisplay();
//    display.setCursor(5*i, 8*i);
//    display.println("WIN WIN");
//    display.display();
//    delay(250);
//    }
}
