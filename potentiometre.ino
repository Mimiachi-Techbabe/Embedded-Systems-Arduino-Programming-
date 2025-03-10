 int potpin = A1;
 int Led2 = 9;
 int readValue;
 int writeValue;
 

void setup() {
 pinMode(potpin, INPUT);
 pinMode(Led2, OUTPUT);
 Serial.begin(9600);
  
 
}

void loop() {
  readValue = analogRead(potpin);
  writeValue = (255./1023.)*readValue;
  analogWrite(Led2, writeValue);
  Serial.print("you're printing the value of");
  Serial.println(writeValue);
  

}
