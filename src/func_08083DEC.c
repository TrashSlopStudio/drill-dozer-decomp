#include "types.h"
extern void func_08083DB4(u32, u32, u32);
void func_08083DEC(u32 a, u8 *b, u32 c) {
    s32 i = 0;
loop: {
    u32 k = i * 4;
    u8 *q = b + 0x44;
    u32 v = *(u32 *)(q + k);
    if (v != 0) {
        func_08083DB4(v, (u32)b, c);
    }
}
    i++;
    if (i <= 10)
        goto loop;
}
