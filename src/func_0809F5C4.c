#include "types.h"

extern void func_08006C68(u32);
extern void func_08005560(u32);

void func_0809F5C4(u8 *a) {
    u32 *p = (u32 *)(a + 4);
    s32 i = 12;
    do {
        func_08006C68(*p);
        func_08005560(*p++);
    } while (--i >= 0);
}
