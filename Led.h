// It's needed to use Arduino methods, functions, constants, etc. Like pinMode(), LOW or HIGH
#include "Arduino.h"

class Led {
  private:
    int PIN;
    void setPinMode();

  public:
    Led(int ledPin);
    void blink(int myDelay);
};