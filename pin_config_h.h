#ifndef PIN_CONFIG_H
#define PIN_CONFIG_H
#include "stm32f411xe.h"
#include "gpio_h.h"
#include "tim_h.h"

// Status Led Light: General output
#define STATUS_LED_PORT GPIOA
#define STATUS_LED_PIN 0

// PWM for motor
#define PWM_PORT GPIOA
#define PWM_PIN 1
#define PWM_TIMER TIM2

// Logic Direction input pins 
#define DIR_PORT GPIOA
#define DIR1_PIN 2
#define DIR2_PIN 3

// Motor PWM PSC, ARR, Channel
#define PWM_PSC 15
#define PWM_ARR 999
#define PWM_CHANNEL 2


void PIN_Config_Init(void);

#endif