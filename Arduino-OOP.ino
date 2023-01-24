#include "Led.h"

#define ledPin 25

Led led(int(ledPin));

void setup() {
  // The setup is made in the class
  //pinMode(led, OUTPUT);
}

void loop() {
  led.blink(500);
  // setPinMode is a private method
  //myLed.setPinMode();
}