#include "motor.h"
#include "pin_config_h.h"
#include "tim_h.h"
#include "gpio_h.h"

// Hardware Config table from pin_config
extern Motor_Config motors[4];

#define MAX_DUTY (1249 + 1)

void Motor_Set_Speed(MOTOR_ID motor_id, uint32_t duty)
{
	if (motor_id > RR) return;
	
	Motor_Config *motor = &motors[motor_id];
	
	duty = (uint32_t)(duty * motor->calibration);
	
	if (duty > MAX_DUTY) duty = MAX_DUTY;

	TIM_PWM_Set_Duty(motor->timer, motor->channel, duty);
	
}
void Motor_Set_Direction(MOTOR_ID motor_id, uint8_t dir)
{
	if (motor_id > RR) return;
	
	Motor_Config *motor = &motors[motor_id];
	
	if(dir)
	{
		GPIO_Set_Pin(motor->dir1_port, motor->dir1_pin);
		GPIO_Reset_Pin(motor->dir2_port, motor->dir2_pin);
	}
	else
	{
		GPIO_Set_Pin(motor->dir2_port, motor->dir2_pin);
		GPIO_Reset_Pin(motor->dir1_port, motor->dir1_pin);
	}
}
	
void Motor_Stop(MOTOR_ID motor_id)
{
	if (motor_id > RR) return;
	
	Motor_Config *motor = &motors[motor_id];
	
	TIM_PWM_Set_Duty(motor->timer, motor->channel, 0);
}