#include "pin_config_h.h"
#include "gpio_h.h"
#include "tim_h.h"

void PIN_Config_Init(void)
{
	GPIO_Init(STATUS_LED_PORT, STATUS_LED_PIN, GPIO_MODE_AF, GPIO_OTYPE_PP, GPIO_SPEED_MEDIUM, GPIO_NOPUPD);
	GPIO_Set_AF(STATUS_LED_PORT, STATUS_LED_PIN, GPIO_AF1);
	TIM_PMW_Init(TIM2, PSC, ARR);
	TIM_PMW_Enable_Channel(TIM2, CHANNEL);
	TIM_PMW_Set_Duty(TIM2, CHANNEL, 5000);
	TIM_Start(TIM2);
	
}
