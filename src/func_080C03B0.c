#include "types.h"

extern void func_080B29D4(u32 *);

void func_080C03B0(u8 *a) {
    u32 v;
    *(u32 *)(a + 0xC) = 0;
    func_080B29D4(&v);
    *(u32 *)(a + 0x48) = v;
    *(u32 *)(a + 0x58) = 0;
    *(u32 *)(a + 0x5C) = 0;
    *(u32 *)(a + 0x54) = 0x80000;
}
