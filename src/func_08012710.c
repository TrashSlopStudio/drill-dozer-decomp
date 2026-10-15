#include "types.h"
extern u16 *func_0801273C(u8 a, u8 b);
void func_08012710(u8 *a, u8 b, u16 *c) {
    u16 *p = func_0801273C(a[18], b);
    c[3] = p[2];
    c[1] = p[0];
    c[2] = p[1];
    c[0] = p[3];
    ((u8 *)c)[8] = b;
}
