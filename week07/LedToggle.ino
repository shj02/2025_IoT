#include <LedToggle.h>

LedToggle led(LED_BUILTIN);
LedToggle led1(13);

void setup() {
}

void loop() {
  led.toggle();
  led1.toggle();
  delay(500);
}
