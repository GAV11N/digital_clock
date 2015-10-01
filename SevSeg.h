#define RESISTORS_ON_SEGMENTS 0
#define MAXNUMDIGITS 8 //Increase this number to support larger displays


#ifndef SevSeg_h
#define SevSeg_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

// Use defines to link the hardware configurations to the correct numbers
#define COMMON_CATHODE 0
#define COMMON_ANODE 1
#define N_TRANSISTORS 2
#define P_TRANSISTORS 3
#define NP_COMMON_CATHODE 1
#define NP_COMMON_ANODE 0


class SevSeg
{
public:
  SevSeg();

  void refreshDisplay();
  void begin(byte hardwareConfig, byte numDigitsIn, byte digitPinsIn[], byte segmentPinsIn[]);
  void setBrightness(int brightnessIn); // A number from 0..100

  void setNumber(long numToShow, byte decPlaces);
  void setNumber(unsigned long numToShow, byte decPlaces);
  void setNumber(int numToShow, byte decPlaces);
  void setNumber(unsigned int numToShow, byte decPlaces);
  void setNumber(char numToShow, byte decPlaces);
  void setNumber(byte numToShow, byte decPlaces);
  void setNumber(float numToShow, byte decPlaces);

private:
  void setNewNum(long numToShow, byte decPlaces);
  void findDigits(long numToShow, byte decPlaces, byte nums[]);
  void setDigitCodes(byte nums[], byte decPlaces);

  boolean digitOn,digitOff,segmentOn,segmentOff;
  byte digitPins[MAXNUMDIGITS];
  byte segmentPins[8];
  byte numDigits;
  byte digitCodes[MAXNUMDIGITS];
  int ledOnTime;
  const static long powersOf10[10];

};

#endif //SevSeg_h
/// END ///
