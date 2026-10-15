#include "types.h"

void func_0802FE5C(u8 *p) {
    s32 *q = (s32 *)(p + 356);
    *q += 0x8000;
    if (*q > 0x80000)
        *q = 0x80000;
}
