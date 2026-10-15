#include "types.h"

extern void func_0801BFE4(u8 *, u8 *, u32);

u32 func_08044890(u8 *p) {
    u8 *q = p;
    q += 0x7C;
    if (q[6] == 2)
        func_0801BFE4(p, p + 0x84, 0);
    return 0;
}
