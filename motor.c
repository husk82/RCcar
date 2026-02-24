#include "motor.h"
#include "pin_config_h.h"

void Motor_Set_Speed(uint32_t duty)
{
	if (duty > 999) duty = 999;
	TIM_PWM_Set_Duty(PWM_TIMER, PWM_CHANNEL, duty);
}
void Motor_Set_Direction(uint8_t dir)
{
	if(dir == 0) // forward
	{
		GPIO_Set_Pin(DIR_PORT, DIR1_PIN);
    GPIO_Reset_Pin(DIR_PORT, DIR2_PIN);
	}
  else // backward
  {
    GPIO_Reset_Pin(DIR_PORT, DIR1_PIN);
    GPIO_Set_Pin(DIR_PORT, DIR2_PIN);
	}
}
	
void Motor_Stop(void)
{
	TIM_PWM_Set_Duty(PWM_TIMER, PWM_CHANNEL, 0);
	GPIO_Reset_Pin(DIR_PORT, DIR1_PIN);
	GPIO_Reset_Pin(DIR_PORT, DIR2_PIN);
}