#include <Arduino.h>
#define buzzerPin 5
#define pulsePin 2

void pulseBuzzer();

void setup()
{
  pinMode(buzzerPin,OUTPUT);
  pinMode(pulsePin,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(pulsePin), pulseBuzzer,FALLING);
}
void loop()
{
}

void pulseBuzzer(){
  // generates a 400Hz tone in output pin 8 with 2000ms of duration
  tone(buzzerPin, 400, 2000); 
}
