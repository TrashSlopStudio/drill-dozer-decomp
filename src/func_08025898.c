#include "types.h"

extern void func_0800B5D8(u32, u32);
extern void func_0801B0B4(u8);
extern void func_0801B1C4(u8 *);

u32 func_08025898(u8 *p, u8 *q) {
    if (q[1] != 0) {
        func_0800B5D8(*(u32 *)(p + 12), *(u16 *)(p + 24));
        func_0801B0B4(p[20]);
        func_0801B1C4(p);
    }
    return 0;
}
