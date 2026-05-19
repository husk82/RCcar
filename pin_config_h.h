#ifndef PIN_CONFIG_H
#define PIN_CONFIG_H
#include "stm32f411xe.h"

typedef struct
{
    GPIO_TypeDef *pwm_port;
    uint8_t pwm_pin;
		uint8_t pwm_af;
	
    TIM_TypeDef *timer;
    uint8_t channel;

    GPIO_TypeDef *dir1_port;
    uint8_t dir1_pin;

    GPIO_TypeDef *dir2_port;
    uint8_t dir2_pin;

    float calibration;   

} Motor_Config;

typedef struct
{
	GPIO_TypeDef *tx_port;
	uint8_t tx_pin;
	
	GPIO_TypeDef *rx_port;
	uint8_t rx_pin;
	
	uint8_t af;
	USART_TypeDef *instance;
}	USART_Config;

typedef struct
{
    TIM_TypeDef *timer;
    uint32_t psc;
    uint32_t arr;
} PWM_Config;

extern Motor_Config motors[4];

void PIN_Config_Init(void);

#endif