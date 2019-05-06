#ifndef _BUTTON_H
#define _BUTTON_H

#include "definitions.h"

class Button {

private:
	uint8_t _pin;

public:
	Button(uint8_t pin);
	bool read();
};


#endif

