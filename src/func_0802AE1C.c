#include "types.h"

extern u8 *func_08001728(u32);
extern u8 *gUnk_02035898;

void func_0802AE1C(void) {
    u8 **p = &gUnk_02035898;
    u8 *q = func_08001728(32);
    *p = q;
    q[28] = 1;
}
