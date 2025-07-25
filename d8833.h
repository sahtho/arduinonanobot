// MotorControl.h

#ifndef D8833_H
#define D8833_H

#include <Arduino.h>

// ฟังก์ชันควบคุมมอเตอร์
void setMotor(byte in1, byte in2,byte in3,byte in4); //in1-in4 (11,10,9,3)
void L_Motor(int speed);  //-255 to 255  in1-2
void R_Motor(int speed); // -255 to 255  in3-4
void stop(int stopTime); //ส่งมาเป็นมิลลิ

#endif