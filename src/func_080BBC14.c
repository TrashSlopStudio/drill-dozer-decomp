#include "types.h"

extern void func_080BBC3C(u8 *, u8, u8);

void func_080BBC14(u8 *p, u8 a, u8 b) {
    u8 z = 0;
    p[14] = 1;
    p[15] = z;
    p[16] = z;
    func_080BBC3C(p, a, b);
}
