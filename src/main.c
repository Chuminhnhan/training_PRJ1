#include "stm32f10x.h"

void init();
void Delay(__IO uint32_t nCount);

int main(){
	while(1){
		GPIO_SetBits(GPIOC, GPIO_Pin_13);
		Delay(5000000);
		GPIO_ResetBits (GPIOC, GPIO_Pin_13);
		Delay(5000000);
		
	}
	return 0;
}

void init(){
	GPIO_InitTypeDef gpioinit;
	RCC_APB2PeriphClockCmd (RCC_APB2Periph_GPIOC, ENABLE);
	gpioinit.GPIO_Mode = GPIO_Mode_Out_PP ;
	gpioinit.GPIO_Pin = GPIO_Pin_13 ;
	gpioinit.GPIO_Mode = GPIO_Mode_Out_PP ;
	gpioinit.GPIO_Speed = GPIO_Speed_50MHz ;
	GPIO_Init(GPIOC, &gpioinit);
}
void Delay(__IO uint32_t nCount)
{
while(nCount--) { }
}