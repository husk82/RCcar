#include "gpio_h.h"

// Enable clock for GPIO port
static void GPIO_Enable_Clock(GPIO_TypeDef *GPIOx)
{
	if (GPIOx == GPIOA) RCC_Enable_GPIOA();
  else if (GPIOx == GPIOB) RCC_Enable_GPIOB();
  else if (GPIOx == GPIOC) RCC_Enable_GPIOC();
  else if (GPIOx == GPIOD) RCC_Enable_GPIOD();
}

void GPIO_Init(GPIO_TypeDef *GPIOx, uint8_t pin, uint8_t mode, uint8_t otype, uint8_t speed, uint8_t pupd)
{
	GPIO_Enable_Clock(GPIOx);
	
	// Moder
	GPIOx->MODER &= ~(0x3 << (pin * 2));
	GPIOx->MODER |= (mode << (pin * 2));
	
	// OTYPER
	GPIOx->OTYPER &= ~(0x1 << pin);
	GPIOx->OTYPER |= (otype << pin);
	
	// OSPEEDR
	GPIOx->OSPEEDR &= ~(0x3 << (pin * 2));
  GPIOx->OSPEEDR |= (speed << (pin * 2));
	
	// PUPDR
	GPIOx->PUPDR &= ~(0x3 << (pin * 2));
  GPIOx->PUPDR |= (pupd << (pin * 2));
	
}

