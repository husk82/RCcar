#ifndef MOTOR_H
#define MOTOR_H

#include "stm32f411xe.h"

//Motor control functions
void Motor_Set_Speed(uint32_t duty);
void Motor_Set_Direction(uint8_t dir);
void Motor_Stop(void);

#endif