#ifndef RCC_H
#define RCC_H

#include "stm32f411xe.h"
#include "stm32f4xx.h"

// Initialize RCC in default mode
void RCC_Init(void);

void RCC_Enable_GPIOx(GPIO_TypeDef *GPIOx);
void RCC_Enable_TIMx(TIM_TypeDef *TIMx);

#endif