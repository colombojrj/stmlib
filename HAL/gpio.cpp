#include "gpio.h"

void gpioAsOutputPP(volatile uint32_t* port, uint32_t pin)
{
    RCC_AHBENR = RCC_AHBENR | (1 << IOPBEN);

    GPIOB_MODER = (1 << 6);
    GPIOB_OTYPER = 0;
    GPIOB_PUPDR = 0;
    GPIOB_ODR = (1 << 3);
}



