#ifndef RCC_H
#define RCC_H

#include "stm32f411xe.h"

void RCC_Init(void);

// Peripheral clocks
void RCC_Enable_GPIOA(void);
void RCC_Enable_GPIOB(void);
void RCC_Enable_GPIOC(void);
void RCC_Enable_GPIOD(void);

#endif