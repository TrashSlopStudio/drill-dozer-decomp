#include "types.h"

extern void func_080057F0(u32, u32, u32);

void func_080F3CA4(u8 *p, u32 *q, u32 v) {
    func_080057F0(q[1], 0, 0);
    p[0x78] = v;
}
