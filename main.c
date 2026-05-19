#include "motor.h"
#include "pin_config_h.h"
#include "usart_h.h"

int main(void)
{
	PIN_Config_Init();
	
	Motor_Set_Speed(LF, 500);
	Motor_Set_Direction(LF, 1);
	Motor_Set_Speed(LR, 650);
	Motor_Set_Direction(LR, 1);
	Motor_Set_Speed(RF, 900);
	Motor_Set_Direction(RF, 0);
	Motor_Set_Speed(RR, 1000);
	Motor_Set_Direction(RR, 0);
	
	while(1)
	{
		
	}
}