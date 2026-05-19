#include "usart_h.h"

void USART_Init(USART_TypeDef *USARTx, uint32_t baudrate)
{
	USARTx->BRR = baudrate;
	USARTx->CR1 |= USART_CR1_TE | USART_CR1_RE | USART_CR1_UE;
}

void USART_Write_Char(USART_TypeDef *USARTx, char ch)
{
	while (!(USARTx->SR & USART_SR_TXE));
	USARTx->DR = ch;
}

void USART_Write_String(USART_TypeDef *USARTx, char *str)
{
	while (*str)
	{
		USART_Write_Char(USARTx, *str++);
	}
}

char USART_ReadChar(USART_TypeDef *USARTx)
{
	while (!(USARTx->SR & USART_SR_RXNE));
	return USARTx->DR;
}