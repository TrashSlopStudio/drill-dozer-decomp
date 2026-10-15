#include "types.h"

extern u32 func_08044F58(u8 *, s32);

u32 func_08044F98(u8 *p, s32 a, s32 b) {
    if (((s8 *)p)[9] == 1) {
        if (b == 0)
            a = -a;
    } else if (b == 1) {
        a = -a;
    }
    return func_08044F58(p, a);
}
