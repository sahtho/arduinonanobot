// MotorControl.h

#ifndef NANOBOT_SENSORS_H
#define NANOBOT_SENSORS_H

#include <Arduino.h>

struct qreData{
  int leftFrontValue;
  int rightFrontValue;
};

void setQRE1113(byte LF,byte RF);
qreData readQRE();

#endif