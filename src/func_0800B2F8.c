#include "types.h"

extern void func_0800B368(u8 *, u32);

void func_0800B2F8(u8 *p, u16 v, u32 b) {
    if (p[0x109] != 0xFF) {
        p[0x109] = v;
        func_0800B368(p, b);
    }
}
