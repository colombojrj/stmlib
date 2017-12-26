#include "gpio.h"

void gpioAsOutputPP(uint32_t port, uint32_t pin)
{
    // Enable GPIO clock
    RCC_AHBENR = RCC_AHBENR | (1 << IOPBEN);

    // Clear MODE configuration and configure it
    MODERx(port) = MODERx(port) & ~(0b11 << (2*pin));
    MODERx(port) = MODERx(port) | (1 << (2*pin));

    OTYPERx(port) = 0;
    PUPDRx(port) = 0;
}

void gpioWriteLow(uint32_t port, uint32_t pin)
{
    ODRx(port) = ODRx(port) & ~(1 << pin);
}

void gpioWriteHigh(uint32_t port, uint32_t pin)
{
    ODRx(port) = ODRx(port) | (1 << pin);
}

void gpioWrite(uint32_t port, uint32_t pin, bool state)
{
    if (state == 0)
        gpioWriteLow(port, pin);
    else
        gpioWriteHigh(port, pin);
}

