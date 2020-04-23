/*DaleonL
April 8th, 2020*/

#include <Arduino.h>
const int LedPin = 13;
const int delayPeriod = 50;
void setup() {
  pinMode(LedPin,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(LedPin,LOW);
  delay(delayPeriod);
  digitalWrite(LedPin,HIGH);
  delay(delayPeriod*2);
  digitalWrite(LedPin,LOW);
  delay(delayPeriod);
  digitalWrite(LedPin,HIGH);
  delay(delayPeriod*20);
  // put your main code here, to run repeatedly:
}