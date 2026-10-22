#include "types.h"

extern void func_0806B820(u32 a, u32 b);

u32 func_080E7D50(u32 *p) {
    p[1]++;
    if ((s32)p[1] > 44) {
        p[1] = 0;
        p[2] = 1;
        p[0] = 4;
        func_0806B820(p[6], 6);
    }
    return 0;
}
