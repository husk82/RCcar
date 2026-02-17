#include "pin_config_h.h"
#include "gpio_h.h"

void PIN_Config_Init(void)
{
	GPIO_Init(STATUS_LED_PORT, STATUS_LED_PIN, GPIO_MODE_OUTPUT, GPIO_OTYPE_PP, GPIO_SPEED_MEDIUM, GPIO_NOPUPD);
}
