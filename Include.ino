#include <AFMotor.h>

const byte TEP = A3;
const byte buzzerPin = 10;

AF_Stepper s1(200/*<-useless*/, 1/*<-M1,M2*/);/*s1<-object of left stepper*/
AF_Stepper s2(200/*<-useless*/, 2/*<-M3,M4*/);/*s2<-object of right stepoper*/

void initializeSetup() {
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);
}
