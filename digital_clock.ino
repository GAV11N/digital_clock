// Gavin Andrew

#include "SevSeg.h"
 SevSeg sevseg;

#define d1 13
#define d2 12
#define d3 11
#define d4 10
#define dp 9
#define g 8
#define f 7
#define e 6
#define d 5
#define c 4
#define b 3
#define a 2

void setup() {
  // put your setup code here, to run once:
  byte numDigits = 4;
   byte digitPins[] = {d1, d2, d3, d4};
   byte segmentPins[] = {a, b, c, d, e, f, g, dp};
   sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins);
}

void loop() {
  sevseg.setNumber(1234,7);
  sevseg.refreshDisplay();
  sevseg.setBrightness(90);
}
