#ifndef __REGISTERS_H__
#define __REGISTERS_H__

#include <stdint.h>

#define RCC_BASE        0x40021000
#define GPIO_PORTC_BASE 0x40011000

#define RCC_APB2ENR (*(volatile uint32_t *)(RCC_BASE + 0x18))
#define GPIOC_CRH   (*(volatile uint32_t *)(GPIO_PORTC_BASE + 0x04))
#define GPIOC_ODR   (*(volatile uint32_t *)(GPIO_PORTC_BASE + 0x0C))

#define IOPC_EN  4


#endif  /* __REGISTERS_H__ */