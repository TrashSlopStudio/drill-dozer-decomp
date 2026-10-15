#include "types.h"

void func_08092BDC(u8 *p, u32 a, u32 v);

u32 func_08092864(u8 *p) {
    u8 *q = p + 0x7C;
    if (q[5] == 0 && *(u32 *)q != 0)
        func_08092BDC(p, (u32)q, 3);
    return 0;
}
