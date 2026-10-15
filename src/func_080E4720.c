#include "types.h"

void func_080E4720(u8 **p, u32 v) {
    u8 *q = p[1];
    if (q != 0)
        q[1] = v;
}
