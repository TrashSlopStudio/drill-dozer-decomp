#include "types.h"

extern void func_0804869C(u32);
extern void func_08005560(u32);
extern void func_08012884(u32);

void func_080D27AC(u8 *p) {
    u32 *q;
    s32 i;
    u8 *r = p + 0x7C;
    func_0804869C(((u16 *)r)[10]);
    q = (u32 *)(p + 0x80);
    i = 3;
    do {
        func_08005560(*q++);
    } while (--i >= 0);
    func_08012884(0xBE);
}
