#include "types.h"
extern void func_080F3C58(u8 *a, u8 *b, int c);
int func_080F3CC0(u8 *p) {
    u8 *q = p + 0x7c;
    if (((u8 **)q)[1][14] == 1)
        return 1;
    func_080F3C58(p, q, 0);
    return 0;
}
