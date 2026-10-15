#include "types.h"

extern u32 func_08012A00(u16);
extern void func_0801AEB8(u8 *, s32);

void func_0801AED0(u8 *p, s32 a) {
    if (func_08012A00(*(u16 *)(p + 0x16)) == 1)
        func_0801AEB8(p, a);
}
