#ifndef GPIO_H
#define GPIO_H

#include "stm32f411xe.h"

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

// Alternate Functions
#define GPIO_AF0   0
#define GPIO_AF1   1
#define GPIO_AF2   2
#define GPIO_AF3   3
#define GPIO_AF4   4
#define GPIO_AF5   5
#define GPIO_AF6   6
#define GPIO_AF7   7
#define GPIO_AF8   8
#define GPIO_AF9   9
#define GPIO_AF10 10
#define GPIO_AF11 11
#define GPIO_AF12 12
#define GPIO_AF13 13
#define GPIO_AF14 14
#define GPIO_AF15 15

// Alternate Functions Register for Low and High
#define AFRL AFR[0]
#define AFRH AFR[1]

// Arguments = GPIOx, pin, mode, otype, speed, pupd
void GPIO_Init(GPIO_TypeDef *GPIOx, uint8_t pin, uint8_t mode, uint8_t otype, uint8_t speed, uint8_t pupd);

// Set Alternate Function if needed
void GPIO_Set_AF(GPIO_TypeDef *GPIOx, uint8_t pin, uint8_t af);

// Control output pins
void GPIO_Set_Pin(GPIO_TypeDef *GPIOx, uint16_t pin);
void GPIO_Reset_Pin(GPIO_TypeDef *GPIOx, uint16_t pin);
void GPIO_Toggle_Pin(GPIO_TypeDef *GPIOx, uint16_t pin);

#endif