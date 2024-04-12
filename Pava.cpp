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
#include <Arduino.h>
#include <stdlib.h>
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

uint8_t ioToPort(uint8_t io,uint8_t inOut){
	uint8_t port=0;
	switch (inOut){
		case 0 :
			switch (io){
				case 0 :
					port = 45;
					break;
				case 1:
					port = 46;
					break;
				case 2:
					port = 47;
					break;
				case 3:
					port = 48;
					break;
				case 4:
					port = 49;
					break;
				case 5:
					port = 50;
					break;
			}
      break;
		case 1 :
			switch (io){
				case 0:
					port = 22;
					break;
				case 1:
					port = 23;
					break;
				case 2:
					port = 24;
					break;
				case 3:
					port = 25;
					break;
				case 4:
					port = 34;
					break;
				case 5:
					port = 35;
					break;
				default :
					break;
			}
      break;
		case 2 : 
			switch (io){
				case 0:
					port = 28;
					break;
				case 1:
					port = 29;
					break;
				case 2:
					port = 30;
					break;
			}
      break;
		case 3 : 
			switch (io){
				case 0:
					port = 31;
					break;
				case 1:
					port = 32;
					break;
				case 2:
					port = 33;
					break;
			}
      break;
		case 4 : 
			switch (io){
				case 0:
					port = 12;
					break;
			}
      break;
		case 5 : 
			switch (io){
				case 0:
					port = 8;
					break;
				case 1:
					port = 9;
					break;
				case 2:
					port = 10;
					break;
			}
      break;
		case 6 : 
			switch (io){
				case 0:
					port = 44;
					break;
				case 1:
					port = 43;
					break;
				case 2:
					port = 42;
					break;
				case 3:
					port = 41;
					break;
				case 4:
					port = 40;
					break;
				case 5:
					port = 39;
					break;
			}
      break;
		case 7 : 
			switch (io){
				case 0:
					port = 13;
					break;
				case 1:
					port = 14;
					break;
				case 2:
					port = 15;
					break;
				case 3:
					port = 3;
					break;
				case 4:
					port = 4;
					break;
				case 5:
					port = 5;
					break;
			}
      break;
	}
  return port;
}

uint8_t micSensor(uint8_t io){
	uint8_t port = ioToPort(io,INPUT);
	return digitalRead(port);
}

void bdLedOn(uint8_t io){
	uint8_t port = ioToPort(io,LED);
	digitalWrite(port, LOW);
}

void bdLedOff(uint8_t io){
	uint8_t port = ioToPort(io,LED);
	digitalWrite(port, HIGH);
}

void ioLedOn(uint8_t io){
  uint8_t port = ioToPort(io,OUTPUT);
	digitalWrite(port, LOW);
}
void ioLedOff(uint8_t io){
  uint8_t port = ioToPort(io,OUTPUT);
	digitalWrite(port, HIGH);
}

uint8_t micVal(uint8_t io){
	uint8_t port = ioToPort(io,INPUT);
	return digitalRead(port);
}

uint8_t irVal(uint8_t io){
	uint8_t port = ioToPort(io,INPUT);
	return digitalRead(port);
}

uint8_t swInput(uint8_t io){
	uint8_t val = digitalRead(ioToPort(io,Button));
	return val;
}

uint8_t servoMotor(uint8_t io, uint8_t degree){
	servo.Write()
}
void servoInit(class servo,uint8_t io){
	servo.attach(ioToPort(0,OUTPUT));
	pinMode(ioToPort(0,OUTPUT),OUTPUT);
}

void motorRight(uint8_t io){
	digitalWrite(ioToPort(6,io),HIGH);
    digitalWrite(ioToPort(7,io),HIGH);
}
void motorLeft(uint8_t io){
	digitalWrite(ioToPort(6,io),LOW);
    digitalWrite(ioToPort(7,io),HIGH);
}
void motorStop(uint8_t io){
	digitalWrite(ioToPort(6,io),LOW);
    digitalWrite(ioToPort(7,io),LOW);
}

