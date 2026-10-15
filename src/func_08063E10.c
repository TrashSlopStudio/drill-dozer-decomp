#include "types.h"
extern u16 *gUnk_02036048;
extern u16 *func_08001728(u32);
u32 func_08063E10(u16 a, u16 b) {
    u16 **pp = &gUnk_02036048;
    u16 *p;
    *pp = p = func_08001728(16);
    p[4] = a;
    p[5] = b;
    return 1;
}
