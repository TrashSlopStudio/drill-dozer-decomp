#include "types.h"

void func_080F26BC(u8 *p) {
    s32 *q = (s32 *)(p + 0x46C);
    if (*q <= 5)
        *q = *q + 1;
}
