#include "types.h"

u32 func_080E3328(u8 *a, u32 *out) {
    s32 v = *(s32 *)(a + 24);
    out[0] = v & 0xFFFF;
    out[1] = (v >> 16) & 0xFFFF;
    return 1;
}
