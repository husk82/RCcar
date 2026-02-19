#include "rcc_h.h"

void RCC_Init()
{
	RCC->CR |= RCC_CR_HSION;
	while (!(RCC->CR & RCC_CR_HSIRDY));
	
	// Use HSI as system clock
	RCC->CFGR &= ~RCC_CFGR_SW;
}

void RCC_Enable_GPIOx(GPIO_TypeDef *GPIOx)
{
	if (GPIOx == GPIOA)
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
	else if (GPIOx == GPIOB)
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN;
	else if (GPIOx == GPIOC)
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;
}

void RCC_Enable_TIMx(TIM_TypeDef *TIMx)
{
	if (TIMx == TIM1)
		RCC->APB2ENR |= RCC_APB2ENR_TIM1EN;
	else if (TIMx == TIM2)
		RCC->APB1ENR |= RCC_APB1ENR_TIM2EN;
	else if (TIMx == TIM3)
		RCC->APB1ENR |= RCC_APB1ENR_TIM3EN;
	else if (TIMx == TIM4)
		RCC->APB1ENR |= RCC_APB1ENR_TIM4EN;
	
}