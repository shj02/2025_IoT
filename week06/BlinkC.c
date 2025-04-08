  1 module BlinkC @safe()
  2 {
  3     uses interface Timer<TMilli> as Timer0;
  4     uses interface Leds;
  5     uses interface Boot;
  6 }
  7 implementation
  8 {
  9     event void Boot.booted()
 10     {
 11         call Timer0.startPeriodic(250);
 12     }
 13
 14     event void Timer0.fired()
 15     {
 16         call Leds.led0Toggle();
 17     }
 18 }
~
