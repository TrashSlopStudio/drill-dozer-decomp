#include "types.h"
extern void func_0801BF48(void *, u32);
extern void func_0801B064(u32);
void func_0806E28C(u8 *p) {
    u32 *src = (u32 *)(p + 0x7c);
    u8 *dst = p + 0x94;
    s32 i = 3;
    do {
        func_0801BF48(dst, *src);
        func_0801B064(*src++);
        dst += 8;
        i--;
    } while (i >= 0);
}
