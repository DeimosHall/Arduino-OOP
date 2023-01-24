#include "Led.h"

Led::Led(int pin) {
  PIN = pin;
  setPinMode();
}

void Led::setPinMode() {
  pinMode(PIN, OUTPUT);
}

void Led::blink(int myDelay)  {
  digitalWrite(PIN, HIGH);
  delay(myDelay);
  digitalWrite(PIN, LOW);
  delay(myDelay);
}