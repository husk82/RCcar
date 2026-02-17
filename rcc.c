#include "rcc_h.h"

void RCC_Init()
{
	RCC->CR |= RCC_CR_HSION;
	while (!(RCC->CR & RCC_CR_HSIRDY));
	
	// Use HSI as system clock
	RCC->CFGR &= ~RCC_CFGR_SW;
}

void RCC_Enable_GPIOA(void)
{
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
}

void RCC_Enable_GPIOB(void)
{
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN;
}

void RCC_Enable_GPIOC(void)
{
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;
}

void RCC_Enable_GPIOD(void)
{
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
}
