#include "d8833.h"  //L_Motor(+-speed),R_Motor(+-speed),stop(miili)
#include "nanobot_sensors.h"

void setup(){
  Serial.begin(115200);
  setMotor(11,10,9,3);
  setQRE1113(5,6); //left 5 , right 6
  delay(3000);
}

void loop(){
  qreData getQRE;
  getQRE = readQRE();
  Serial.print(getQRE.leftFrontValue);Serial.print(getQRE.rightFrontValue);
  L_Motor(250);
  R_Motor(255);
  delay(5000);
  while(1)stop(1000);
}