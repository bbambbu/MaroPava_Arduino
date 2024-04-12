/************************************************************************************************
Issue Date : 2024.04.03
Revision : 1.0.0
Company : RoboBlockSystem
Project : MaroPava
Coded by : LeeJungMin
Target MCU : ATmega128/TQFP
History :
	2024.04. : 1.0.0 First Issued. First PCB. 
*************************************************************************************************/

#include <Servo.h>

#define INPUT 0 
#define OUTPUT 1
#define Button 2
#define LED 3
#define BUZZER 4
#define SERVO 5
#define MOTOR_EN 6
#define MOTOR_PWM 7

Servo servo;

uint8_t ioToPort(uint8_t io,uint8_t inOut); // io = pinNumber, inOut = ioNumber

uint8_t micSensor(uint8_t io);

void bdLedOn(uint8_t io);

void bdLedOff(uint8_t io);

void ioLedOn(uint8_t io);
void ioLedOff(uint8_t io);

uint8_t micVal(uint8_t io);

uint8_t irVal(uint8_t io);

uint8_t swInput(uint8_t io);

void motorRight(uint8_t io);
void motorLeft(uint8_t io);
void motorStop(uint8_t io);