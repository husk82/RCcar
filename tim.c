#include "tim_h.h"

void TIM_PMW_Init(TIM_TypeDef *TIMx, uint32_t psc, uint32_t arr)
{
	TIMx->CR1 &= ~TIM_CR1_CEN;
	TIMx->PSC = psc;
	TIMx->ARR = arr;
	TIMx->EGR |= TIM_EGR_UG;              // Force update to load PSC/ARR
	TIMx->CR1 |= TIM_CR1_ARPE;						// Enable auto-reload preload
}
void TIM_PMW_Enable_Channel(TIM_TypeDef *TIMx, uint8_t channel)
{
	if(channel == 1)
	{
		TIMx->CCMR1 &= ~(7 << 4);
		TIMx->CCMR1 |= (6 <<4 );							// PWM mode 1
		TIMx->CCMR1 |= TIM_CCMR1_OC1PE;				// Preload enable
		TIMx->CCER |= TIM_CCER_CC1E;					// Enable output
	}
}
void TIM_PMW_Set_Duty(TIM_TypeDef *TIMx, uint8_t channel, uint32_t duty)
{
	if(channel == 1)
	{
		TIMx->CCR1 = duty;
	}
}

void TIM_Start(TIM_TypeDef *TIMx)
{
	TIMx->CR1 |= TIM_CR1_CEN;
}


void TIM_Stop(TIM_TypeDef *TIMx)
{
	TIMx->CR1 &= ~TIM_CR1_CEN;
}
