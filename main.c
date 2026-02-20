#include "rcc_h.h"
#include "pin_config_h.h"

int main(void)
{
	RCC_Init();
	RCC_Enable_GPIOx(GPIOA);
	RCC_Enable_TIMx(TIM2);
	
	PIN_Config_Init();
	while(1)
	{
		
	}
}