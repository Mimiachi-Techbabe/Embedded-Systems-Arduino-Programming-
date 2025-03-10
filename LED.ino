#define LED2R 9
#define LED2G 10
#define LED2B 11
void setup() {
// pin configuration
pinMode(LED2R, OUTPUT);
pinMode(LED2G, OUTPUT);
pinMode(LED2B, OUTPUT);
}
void loop() {
digitalWrite(LED2R, HIGH);
digitalWrite(LED2G, LOW);
digitalWrite(LED2B, LOW);
delay(500);
digitalWrite(LED2R, LOW);
digitalWrite(LED2G,HIGH);
digitalWrite(LED2B, LOW);
delay(500);
digitalWrite(LED2R, LOW);
digitalWrite(LED2G, LOW);
digitalWrite(LED2B, HIGH);
delay(500);
}
