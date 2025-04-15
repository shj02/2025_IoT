#ifdef LedToggle_h
#defiine LedToggle_h

#include "Arduino.h"

class LedToggle {
	public:
		LedToggle(int pin);
		LedToggle(int pin, unsigned long delatTime);
		void toggle();
	
	private:
		int _pin;
		bool _state;
			unsigned long _delayTime;
};

#endif
