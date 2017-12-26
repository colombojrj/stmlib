#ifndef GPIO_H_
#define GPIO_H_

#include "devices/device.h"

extern void gpioAsOutputPP(uint32_t port, uint32_t pin);
extern void gpioAsOutputOD(uint32_t port, uint32_t pin);

extern void gpioWriteLow(uint32_t port, uint32_t pin);
extern void gpioWriteHigh(uint32_t port, uint32_t pin);
extern void gpioWrite(uint32_t port, uint32_t pin, bool state);

#endif /* GPIO_H_ */
