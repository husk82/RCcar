#ifndef PIN_CONFIG_H
#define PIN_CONFIG_H
#include "stm32f411xe.h"

// Status Led Light: General output
#define STATUS_LED_PORT GPIOA
#define STATUS_LED_PIN 1

void PIN_Config_Init(void);

#endif