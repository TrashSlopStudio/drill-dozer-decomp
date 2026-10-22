#include "types.h"

extern void func_080057F0(u32 a, u32 b, u32 c);

void func_080F3638(u8 *a, u32 *b, u32 c) {
    u32 x = b[2];
    u8 *p;
    if (x != 0) {
        p = a + 0x78;
        if (*p != c) {
            func_080057F0(x, 0, 0);
            *p = c;
        }
    }
}
