#include "types.h"

extern void func_0800B5C8(u8 *);

void func_08009FE4(u8 *p) {
    u32 z;
    p[0x74] = z = 0;
    p[0x73] = z;
    *(u32 *)(p + 0x98) = z;
    *(u16 *)(p + 0xA8) = z;
    func_0800B5C8(p);
}
