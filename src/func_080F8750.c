#include "types.h"

void func_080F8750(u8 bank) {
    *(volatile u8 *)0x0E005555 = 0xAA;
    *(volatile u8 *)0x0E002AAA = 0x55;
    *(volatile u8 *)0x0E005555 = 0xB0;
    *(volatile u8 *)0x0E000000 = bank;
}
