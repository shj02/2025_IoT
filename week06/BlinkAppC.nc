  1 configuration BlinkAppC
  2 {
  3 }
  4 implementation {
  5     components MainC, BlinkC, LedsC;
  6     components new TimerMilliC() as Timer0;
  7
  8     BlinkC -> MainC.Boot;
  9
 10     BlinkC.Timer0 -> Timer0; //왼쪽 : 내가 사용할 것 / 오른쪽 : 원본
 11     BlinkC.Leds -> LedsC;
 12 }
