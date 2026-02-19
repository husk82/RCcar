#include "gpio_h.h"

void GPIO_Init(GPIO_TypeDef *GPIOx, uint8_t pin, uint8_t mode, uint8_t otype, uint8_t speed, uint8_t pupd)
{
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

