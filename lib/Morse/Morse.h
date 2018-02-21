#ifndef Morse_h
#define Morse_h

#include <Arduino.h>

class Morse {
private:
	int _pin;
public:
	Morse(int pin);
	void dot();
	void dash();
};
#endif
