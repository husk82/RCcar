#include "rcc_h.h"
#include "pin_config_h.h"

int main(void)
{
	RCC_Init();
	PIN_Config_Init();
	while(1)
	{
		STATUS_LED_PORT->ODR |= (1 << STATUS_LED_PIN);
	}
}