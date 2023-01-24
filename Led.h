#include "Arduino.h"

class Led {
  public:
    Led(int ledPin);
    void blink(int myDelay);
    int PIN;
};