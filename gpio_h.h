#ifndef GPIO_H
#define GPIO_H

#include "stm32f411xe.h"
#include "rcc_h.h"

// GPIO Modes
#define GPIO_MODE_INPUT      0x0
#define GPIO_MODE_OUTPUT     0x1
#define GPIO_MODE_AF         0x2
#define GPIO_MODE_ANALOG     0x3

// GPIO Type
#define GPIO_OTYPE_PP        0x0
#define GPIO_OTYPE_OD        0x1

// GPIO Speed
#define GPIO_SPEED_LOW       0x0
#define GPIO_SPEED_MEDIUM    0x1
#define GPIO_SPEED_HIGH      0x2
#define GPIO_SPEED_VERYHIGH  0x3

// GPIO PullUp-PullDown
#define GPIO_NOPUPD          0x0
#define GPIO_PULLUP          0x1
#define GPIO_PULLDOWN        0x2

// Arguments = GPIOx, pin, mode, otype, speed, pupd
void GPIO_Init(GPIO_TypeDef *GPIOx, uint8_t pin, uint8_t mode, uint8_t otype, uint8_t speed, uint8_t pupd);

#endif