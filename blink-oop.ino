#include "Led.h"

#define led 25

Led myLed(25);

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  myLed.blink(1000);
}