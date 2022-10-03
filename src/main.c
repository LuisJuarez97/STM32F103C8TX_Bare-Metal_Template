#include "stm32f103_regs.h"

void delay_ms(uint32_t t);

int main() {
    RCC_APB2ENR |= (1<<IOPC_EN);
    GPIOC_CRH |= (0x03<<20);

    while (1) {
        GPIOC_ODR ^= (1<<13);
        delay_ms(100);
    }

    return 0;
}

void delay_ms(uint32_t t) {
    for (; t > 0; t--)
        for (uint32_t i = 0; i < 1000; i++)
            __asm__ volatile("nop");
}
