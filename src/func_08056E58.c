#include "types.h"

s32 func_08056E58(u8 *p) {
    s16 *a = (s16 *)(p + 0x166);
    u16 v = *a;
    s16 t = *a;
    if (t > 0)
        v = -t;
    return *(s32 *)(p + 0x100) -= (s16)v;
}
