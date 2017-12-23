#ifndef STM32F303K8_H_
#define STM32F303K8_H_

#define _MMIO_BYTE(mem_addr) (*(volatile uint32_t *)(mem_addr))

//
//////////
// GPIO //
//////////
//

// GPIO port mode register
#define GPIOA_MODER    _MMIO_BYTE(0x48000000)
#define GPIOB_MODER    _MMIO_BYTE(0x48000400)
#define GPIOC_MODER    _MMIO_BYTE(0x48000800)
#define GPIOD_MODER    _MMIO_BYTE(0x48000C00)
#define GPIOF_MODER    _MMIO_BYTE(0x48001400)

// GPIO port output type register
#define GPIOA_OTYPER    _MMIO_BYTE(0x48000004)
#define GPIOB_OTYPER    _MMIO_BYTE(0x48000404)
#define GPIOC_OTYPER    _MMIO_BYTE(0x48000804)
#define GPIOD_OTYPER    _MMIO_BYTE(0x48000C04)
#define GPIOF_OTYPER    _MMIO_BYTE(0x48001404)

// GPIO port output speed register
#define GPIOA_OSPEEDR   _MMIO_BYTE(0x48000008)
#define GPIOB_OSPEEDR   _MMIO_BYTE(0x48000408)
#define GPIOC_OSPEEDR   _MMIO_BYTE(0x48000808)
#define GPIOD_OSPEEDR   _MMIO_BYTE(0x48000C08)
#define GPIOF_OSPEEDR   _MMIO_BYTE(0x48001408)

// GPIO port pull-up/pull-down register
#define GPIOA_PUPDR     _MMIO_BYTE(0x4800000C)
#define GPIOB_PUPDR     _MMIO_BYTE(0x4800040C)
#define GPIOC_PUPDR     _MMIO_BYTE(0x4800080C)
#define GPIOD_PUPDR     _MMIO_BYTE(0x48000C0C)
#define GPIOF_PUPDR     _MMIO_BYTE(0x4800140C)

// GPIO port input data register

// GPIO port output data register
#define GPIOA_ODR       _MMIO_BYTE(0x48000000+0x14)
#define GPIOB_ODR       _MMIO_BYTE(0x48000400+0x14)
#define GPIOC_ODR       _MMIO_BYTE(0x48000800+0x14)
#define GPIOD_ODR       _MMIO_BYTE(0x48000C00+0x14)
#define GPIOF_ODR       _MMIO_BYTE(0x48001400+0x14)

//
/////////
// RCC //
/////////
//
#define RCC_AHBENR      _MMIO_BYTE(0x40021000+0x14)
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
