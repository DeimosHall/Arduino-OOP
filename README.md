# Object Oriented Programing in Arduino

This project is the classic blinky LED implemented using OOP.

## Project structure

We have the main code on the Arduino-OOP file, and our library is on the Led.h and Led.cpp files.

```
.
├── Arduino-OOP.ino
├── Led.cpp
└── Led.h
```

## Led.h

The first step is to create a library header file. In this case, as we are managing a LED, we create a "Led.h" file.

```
#include "Arduino.h"

class Led {
  private:
    int PIN;
    void setPinMode();

  public:
    Led(int ledPin);
    void blink(int myDelay);
};
```

We can declare both private and public methods and variables. It depends on how we want to work or how we want our users to interact with our library.

> Note: we only define the methods, but we don't specify their behavior

## Led.cpp

This file is where we define the behavior of the library

```
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
```
The "Led" method is known as the constructor and it's called when we create an instance of this class. **We will see this on the ino file**.

## Arduino-OOP.ino

```
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
```

When we create an instance of the "Led" class, we include the required "int pin". Since the "ledPin" is a string, we convert it to an integer.

The "setPinMode" method is private, meaning it cannot be accessed. You can uncomment the line to see the error messages.
