#include "types.h"

extern void func_080057F0(u32, u32, u32);

void func_080EFB28(u8 *p, u32 v) {
    p[120] = v;
    func_080057F0(*(u32 *)(p + 124), 0, 0);
}
