#include "rcc_h.h"
#include "pin_config_h.h"
#include "motor.h"

int main(void)
{
	RCC_Init();
	RCC_Enable_GPIOx(GPIOA);
	RCC_Enable_TIMx(TIM2);
	
	PIN_Config_Init();
	GPIO_Set_Pin(STATUS_LED_PORT, STATUS_LED_PIN); 
	
	Motor_Set_Direction(1); // backward
	Motor_Set_Speed(999);
	
	while(1)
	{
		
	}
}