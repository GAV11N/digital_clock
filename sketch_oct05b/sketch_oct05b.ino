#include "SevSeg.h"
 SevSeg sevseg;
 
 void setup() {
   byte numDigits = 4;
   byte digitPins[] = {2, 3, 4, 5};
   byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13};
   sevseg.begin(COMMON_ANODE, numDigits, digitPins, segmentPins);
}

void loop() {
  sevseg.setNumber(3.141f,3);
  sevseg.refreshDisplay();
  sevseg.setBrightness(90);
}
