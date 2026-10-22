#include "types.h"

extern void func_080057F0(u32 a, u32 b, u32 c);

void func_0804BB28(u32 a, u8 *p, u32 k, u32 v) {
    if (k == 2) {
        func_080057F0(*(u32 *)(p + 16), 0, 0);
        p[13] = v;
    } else {
        func_080057F0(*(u32 *)(p + 24), 0, 0);
        p[14] = v;
    }
}
