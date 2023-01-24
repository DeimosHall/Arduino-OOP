#include "Led.h"

#define led 25

Led myLed(int(led));

void setup() {
  // The setup is made in the class
  //pinMode(led, OUTPUT);
}

void loop() {
  myLed.blink(500);
  // setPinMode is a private method
  //myLed.setPinMode();
}