#include "stm32f10x.h"

int main(void)
{
   // SystemInit();
   // SystemCoreClockUpdate();

    RCC->APB2ENR |= RCC_APB2ENR_IOPCEN;

    GPIOC->CRH=0x33333333;

    while(1)
    {
        volatile int i = 0;

        for(i=0;i<0x40000;i++){
        }

        GPIOC->ODR ^= (1 << 13);
    }
}
