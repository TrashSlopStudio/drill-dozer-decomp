#include "types.h"

extern u8 *func_0803F7D8(void);
extern u32 func_080F8FBC(u8 *, u32, u32);
extern u32 gUnk_082B95A0[];

void func_0803F244(void) {
    u8 *p = func_0803F7D8();
    u32 q = *(u32 *)(p + 92);
    do {
    } while (func_080F8FBC(p, q, gUnk_082B95A0[*(u32 *)p]) == 1);
}
