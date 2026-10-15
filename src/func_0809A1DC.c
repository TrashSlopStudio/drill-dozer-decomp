#include "types.h"
extern void func_0809A31C(void *, void *, u32);
u32 func_0809A1DC(u8 *p) {
    u8 *q = p + 0x7c;
    if (*(u32 *)(p + 0x7c) != 0 && !(q[8] & 1)) {
        func_0809A31C(p, q, 4);
    }
    return 0;
}
