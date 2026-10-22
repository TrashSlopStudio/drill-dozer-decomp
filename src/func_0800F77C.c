#include "types.h"

extern void func_0800F7AC(u16 *, s16, s16);

void func_0800F77C(u16 *p, s16 a, s16 b) {
    u16 v[2];
    u16 *q = v;
    func_0800F7AC(v, a, b);
    p[0] = q[1];
    p[1] = q[1] + 16;
    p[2] = v[0];
    p[3] = v[0] + 16;
}
