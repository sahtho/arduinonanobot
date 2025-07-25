// MotorControl.cpp

#include "d8833.h"

// ตัวอย่างขาที่ใช้
byte lPin1,lPin2,rPin1,rPin2;

void setMotor(byte in1,byte in2,byte in3,byte in4){
	lPin1=in1;
  lPin2=in2;
  rPin1=in3;
  rPin2=in4;
	pinMode(lPin1, OUTPUT);
	pinMode(lPin2, OUTPUT);
	pinMode(rPin1, OUTPUT);
	pinMode(rPin2, OUTPUT);
}

void L_Motor(int speed) {
  if (speed >= 0) {
    analogWrite(lPin2, speed);
    digitalWrite(lPin1, LOW);
  } else 
  {
	speed=(-1)*speed;
    digitalWrite(lPin2, LOW);
    analogWrite(lPin1, speed);
  }
}

void R_Motor(int speed) {
  if (speed >= 0) {
    analogWrite(rPin2, speed);
    digitalWrite(rPin1, LOW);
  } else 
  {
	speed=(-1)*speed;
    digitalWrite(rPin2, LOW);
    analogWrite(rPin1, speed);
  }
}

void stop(int stopTime){
	digitalWrite(lPin1, LOW);
	digitalWrite(lPin2, LOW);
	digitalWrite(rPin1, LOW);
	digitalWrite(rPin2, LOW);
	delay(stopTime);
}