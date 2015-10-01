// Gavin Andrew

#include "SevSeg.h"

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
  pinMode(dp,OUTPUT);
  pinMode(d1, OUTPUT);
  pinMode(d2, OUTPUT);
  pinMode(d3, OUTPUT);
  pinMode(d4, OUTPUT);
  pinMode(a, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
   digitalWrite(d1, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(d3, LOW);
  digitalWrite(d4, LOW);

  digitalWrite(dp, HIGH);
  digitalWrite(a, HIGH);
}
