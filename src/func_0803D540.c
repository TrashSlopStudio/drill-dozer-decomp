#include "types.h"

extern u8 *func_08001728(u32);

void func_0803D540(u8 *a) {
    u8 *p = func_08001728(0x370);
    *(u8 **)(a + 0x7c) = p;
    *(u32 *)(p + 0x158) = *(u32 *)(a + 0xc);
    *(u8 **)(p + 0x15c) = a;
    *(u32 *)(p + 0x6c) = 0x20;
    *(u32 *)(p + 0x70) = 0x20;
}
