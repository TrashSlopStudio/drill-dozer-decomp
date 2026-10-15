#include "types.h"

void func_080301F4(u8 *p) {
    u16 t;
    *(u32 *)(p + 0x144) = *(u32 *)(p + 0x140);
    *(u16 *)(p + 0x140) = *(u16 *)(p + 0x15A);
    t = *(u16 *)(p + 0x15E);
    *(u16 *)(p + 0x142) = t;
}
