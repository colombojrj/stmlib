#ifndef STM32F303K8_H_
#define STM32F303K8_H_

#define _MMIO(mem_addr) (*(volatile uint32_t *)(mem_addr))

//
//////////
// GPIO //
//////////
//

#define GPIOA 0x48000000
#define PA0             0
#define PA1             1
#define PA2             2
#define PA3             3
#define PA4             4
#define PA5             5
#define PA6             6
#define PA7             7
#define PA8             8
#define PA9             9
#define PA10            10
#define PA11            11
#define PA12            12
#define PA13            13
#define PA14            14
#define PA15            15

#define GPIOB 0x48000400
#define PB0             0
#define PB1             1
#define PB2             2
#define PB3             3
#define PB4             4
#define PB5             5
#define PB6             6
#define PB7             7
#define PB8             8
#define PB9             9
#define PB10            10
#define PB11            11
#define PB12            12
#define PB13            13
#define PB14            14
#define PB15            15

#define GPIOC           0x48000800
#define PC0             0
#define PC1             1
#define PC2             2
#define PC3             3
#define PC4             4
#define PC5             5
#define PC6             6
#define PC7             7
#define PC8             8
#define PC9             9
#define PC10            10
#define PC11            11
#define PC12            12
#define PC13            13
#define PC14            14
#define PC15            15

#define GPIOD           0x48000C00
#define PD0             0
#define PD1             1
#define PD2             2
#define PD3             3
#define PD4             4
#define PD5             5
#define PD6             6
#define PD7             7
#define PD8             8
#define PD9             9
#define PD10            10
#define PD11            11
#define PD12            12
#define PD13            13
#define PD14            14
#define PD15            15

#define GPIOF           0x48001400
#define PF0             0
#define PF1             1
#define PF2             2
#define PF3             3
#define PF4             4
#define PF5             5
#define PF6             6
#define PF7             7
#define PF8             8
#define PF9             9
#define PF10            10
#define PF11            11
#define PF12            12
#define PF13            13
#define PF14            14
#define PF15            15

// Macros to help
#define MODERx(GPIOx)   _MMIO(GPIOx+0x00) // GPIO port mode register
#define OTYPERx(GPIOx)  _MMIO(GPIOx+0x04) // GPIO port output type register
#define OSPEEDRx(GPIOx) _MMIO(GPIOx+0x08) // GPIO port output speed register
#define PUPDRx(GPIOx)   _MMIO(GPIOx+0x0C) // GPIO port pull-up/pull-down register
#define IDRx(GPIOx)     (*(&GPIOx+0x10)) // GPIO port input data register
#define ODRx(GPIOx)     _MMIO(GPIOx+0x14)// GPIO port output data register
#define BSSRx(GPIOx)    (*(&GPIOx+0x18)) // GPIO port bit set/reset register
#define LCKRx(GPIOx)    (*(&GPIOx+0x1C)) // GPIO port configuration lock register
#define AFRLx(GPIOx)    (*(&GPIOx+0x20)) // GPIO alternate function low register
#define AFRHx(GPIOx)    (*(&GPIOx+0x24)) // GPIO alternate function high register
#define BRRx(GPIOx)     (*(&GPIOx+0x28)) // GPIO port bit reset register






//
/////////
// RCC //
/////////
//
#define RCC_AHBENR      _MMIO(0x40021000+0x14)
#define DMA1EN          0
#define DMA2EN          1
#define SRAMEN          2
#define FLITFEN         4
#define FMCEN           5
#define CRCEN           6
#define IOPHEN          16
#define IOPAEN          17
#define IOPBEN          18
#define IOPCEN          19
#define IOPDEN          20
#define IOPEEN          21
#define IOPFEN          22
#define IOPGEN          23
#define AD34EN          29



#endif /* STM32F303K8_H_ */
