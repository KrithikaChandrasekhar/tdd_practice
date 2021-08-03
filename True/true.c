#include <stdio.h>
#include "led.h"

bool ledstate (void) {
	led_on();
	led_off();
	return 1;
}
