#include "types.h"

void func_08005980(u8 *p, u8 (*t)[4]) {
    {
        u32 b = p[15];
        u32 k = 1;
        k |= b;
        p[15] = k;
    }
    p[8] = t[p[8]][2];
    p[10] = t[p[8]][2];
}
