// MotorControl.cpp
#include "nanobot_sensors.h"
const int timeOut=1200;
byte qrePins[2];

void setQRE1113(byte LF,byte RF){
    qrePins[0]=LF;
    qrePins[1]=RF;
}

int readQREsensor(byte Pin){
  pinMode(Pin, OUTPUT); 
  digitalWrite(Pin, HIGH); 
  delayMicroseconds(10);
  pinMode(Pin, INPUT);
  for(int n=0; n < timeOut ; n++) if(!digitalRead(Pin))return n;
  return timeOut;
}

qreData readQRE(){
  qreData readData;
  readData.leftFrontValue=readQREsensor(qrePins[0]);
  readData.rightFrontValue=readQREsensor(qrePins[1]);
  return readData;
}
