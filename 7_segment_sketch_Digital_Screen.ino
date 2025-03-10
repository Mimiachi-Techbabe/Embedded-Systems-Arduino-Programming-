#include "Adafruit_MCP23008.h"
Adafruit_MCP23008 seg7;
int BUZ = 2;

void setup(){
  seg7.begin(0x24);
  seg7.pinMode(0, OUTPUT);
  seg7.pinMode(7, OUTPUT);
  seg7.pinMode(1, OUTPUT);
  seg7.pinMode(3, OUTPUT);
  seg7.pinMode(6, OUTPUT);
//  seg7.pinMode(4, OUTPUT);
  seg7.pinMode(2, OUTPUT);
  seg7.pinMode(5, OUTPUT);
  pinMode(BUZ,OUTPUT);

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
}

void loop(){
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
digitalWrite(BUZ, LOW);
delay(1000);

seg7.digitalWrite(0,HIGH);
    seg7.digitalWrite(1,HIGH);
 seg7.digitalWrite(3,HIGH);
   seg7.digitalWrite(6,HIGH);
   seg7.digitalWrite(4,HIGH);
  seg7.digitalWrite(5,HIGH);
    seg7.digitalWrite(7,HIGH);
seg7.digitalWrite(2,HIGH);
delay(1000);
 seg7.digitalWrite(0,LOW);
    seg7.digitalWrite(1,LOW);
 seg7.digitalWrite(3,LOW);
   seg7.digitalWrite(6,LOW);
   seg7.digitalWrite(4,LOW);
  seg7.digitalWrite(5,LOW);
    seg7.digitalWrite(7,LOW);
seg7.digitalWrite(2,LOW);
delay(1000);
digitalWrite(BUZ, HIGH);
delay(1000);
digitalWrite(BUZ, LOW);
delay(1000);

seg7.digitalWrite(0,HIGH);
    seg7.digitalWrite(1,HIGH);
 seg7.digitalWrite(2,HIGH);
delay(1000);
 seg7.digitalWrite(0,LOW);
    seg7.digitalWrite(1,LOW);
 seg7.digitalWrite(2,LOW);
delay(1000);
digitalWrite(BUZ, HIGH);
delay(1000);
digitalWrite(BUZ, LOW);
delay(1000);


seg7.digitalWrite(0,HIGH);
    seg7.digitalWrite(3,HIGH);
   seg7.digitalWrite(6,HIGH);
   seg7.digitalWrite(4,HIGH);
  seg7.digitalWrite(5,HIGH);
    seg7.digitalWrite(7,HIGH);
seg7.digitalWrite(2,HIGH);
delay(1000);
 seg7.digitalWrite(0,LOW);
    seg7.digitalWrite(3,LOW);
   seg7.digitalWrite(6,LOW);
   seg7.digitalWrite(4,LOW);
  seg7.digitalWrite(5,LOW);
    seg7.digitalWrite(7,LOW);
seg7.digitalWrite(2,LOW);
delay(1000);
digitalWrite(BUZ, HIGH);
delay(1000);
digitalWrite(BUZ, LOW);
delay(1000);

seg7.digitalWrite(0,HIGH);
    seg7.digitalWrite(3,HIGH);
   seg7.digitalWrite(6,HIGH);
   seg7.digitalWrite(4,HIGH);
  seg7.digitalWrite(5,HIGH);
    seg7.digitalWrite(7,HIGH);
seg7.digitalWrite(2,HIGH);
delay(1000);
 seg7.digitalWrite(0,LOW);
    seg7.digitalWrite(3,LOW);
   seg7.digitalWrite(6,LOW);
   seg7.digitalWrite(4,LOW);
  seg7.digitalWrite(5,LOW);
    seg7.digitalWrite(7,LOW);
seg7.digitalWrite(2,LOW);
delay(1000);
digitalWrite(BUZ, HIGH);
delay(1000);
digitalWrite(BUZ, LOW);
delay(1000);

seg7.digitalWrite(0,HIGH);
    seg7.digitalWrite(3,HIGH);
   seg7.digitalWrite(6,HIGH);
  seg7.digitalWrite(5,HIGH);
    seg7.digitalWrite(7,HIGH);
seg7.digitalWrite(2,HIGH);
delay(1000);
 seg7.digitalWrite(0,LOW);
    seg7.digitalWrite(3,LOW);
   seg7.digitalWrite(6,LOW);
  seg7.digitalWrite(5,LOW);
    seg7.digitalWrite(7,LOW);
seg7.digitalWrite(2,LOW);
delay(1000);
digitalWrite(BUZ, HIGH);
delay(1000);
digitalWrite(BUZ, LOW);
delay(1000);


seg7.digitalWrite(5,HIGH);
    seg7.digitalWrite(6,HIGH);
   seg7.digitalWrite(1,HIGH);
   seg7.digitalWrite(2,HIGH);
     seg7.digitalWrite(7,HIGH);
delay(1000);
 seg7.digitalWrite(5,LOW);
    seg7.digitalWrite(6,LOW);
   seg7.digitalWrite(1,LOW);
   seg7.digitalWrite(2,LOW);
      seg7.digitalWrite(7,LOW);
delay(1000);
digitalWrite(BUZ, HIGH);
delay(1000);
digitalWrite(BUZ, LOW);
delay(1000);


seg7.digitalWrite(0,HIGH);
    seg7.digitalWrite(3,HIGH);
   seg7.digitalWrite(6,HIGH);
  seg7.digitalWrite(1,HIGH);
    seg7.digitalWrite(7,HIGH);
seg7.digitalWrite(2,HIGH);
delay(1000);
 seg7.digitalWrite(0,LOW);
    seg7.digitalWrite(3,LOW);
   seg7.digitalWrite(6,LOW);
  seg7.digitalWrite(1,LOW);
    seg7.digitalWrite(7,LOW);
seg7.digitalWrite(2,LOW);
delay(1000);
digitalWrite(BUZ, HIGH);
delay(1000);
digitalWrite(BUZ, LOW);
delay(1000);


seg7.digitalWrite(0,HIGH);
    seg7.digitalWrite(3,HIGH);
   seg7.digitalWrite(6,HIGH);
  seg7.digitalWrite(4,HIGH);
    seg7.digitalWrite(7,HIGH);
seg7.digitalWrite(1,HIGH);
delay(1000);
 seg7.digitalWrite(0,LOW);
    seg7.digitalWrite(3,LOW);
   seg7.digitalWrite(6,LOW);
  seg7.digitalWrite(4,LOW);
    seg7.digitalWrite(7,LOW);
seg7.digitalWrite(1,LOW);
delay(1000);
digitalWrite(BUZ, HIGH);
delay(1000);
digitalWrite(BUZ, LOW);
delay(1000);


seg7.digitalWrite(1,HIGH);
    seg7.digitalWrite(2,HIGH);
   seg7.digitalWrite(7,HIGH);
  delay(1000);
 seg7.digitalWrite(1,LOW);
    seg7.digitalWrite(2,LOW);
   seg7.digitalWrite(7,LOW);
  delay(1000);
digitalWrite(BUZ, HIGH);
delay(1000);
digitalWrite(BUZ, LOW);
delay(1000);


seg7.digitalWrite(0,HIGH);
    seg7.digitalWrite(3,HIGH);
   seg7.digitalWrite(4,HIGH);
   seg7.digitalWrite(5,HIGH);
  seg7.digitalWrite(1,HIGH);
    seg7.digitalWrite(7,HIGH);
seg7.digitalWrite(2,HIGH);
delay(1000);
 seg7.digitalWrite(0,LOW);
    seg7.digitalWrite(1,LOW);
   seg7.digitalWrite(2,LOW);
  seg7.digitalWrite(3,LOW);
    seg7.digitalWrite(7,LOW);
seg7.digitalWrite(4,LOW);
seg7.digitalWrite(5,LOW);
delay(1000);
digitalWrite(BUZ, HIGH);
delay(1000);
digitalWrite(BUZ, LOW);
delay(1000);
}
