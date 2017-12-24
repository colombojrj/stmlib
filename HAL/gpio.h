#ifndef GPIO_H_
#define GPIO_H_

#include "devices/device.h"

extern void gpioAsOutputPP(volatile uint32_t* port, uint32_t pin);
extern void gpioAsOutputOD(volatile uint32_t* port, uint32_t pin);



#endif /* GPIO_H_ */
