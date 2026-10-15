#include "types.h"

void func_080BD88C(u32 *p) {
    u32 *q;
    u32 z;
    p[8] = 0;
    z = 0;
    q = p + 7;
    do {
        *q = z;
        q--;
    } while ((s32)q >= (s32)p);
}
