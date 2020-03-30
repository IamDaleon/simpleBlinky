#include <Arduino.h>
const int LedPin = 13;

void setup() {
  pinMode(LedPin,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(LedPin,LOW);
  delay(50);
  digitalWrite(LedPin,HIGH);
  delay(100);
  digitalWrite(LedPin,LOW);
  delay(50);
  digitalWrite(LedPin,HIGH);
  delay(1000);
  // put your main code here, to run repeatedly:
}