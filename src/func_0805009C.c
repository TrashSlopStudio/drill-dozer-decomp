#include "types.h"

void func_0805009C(u8 **p, u32 v) {
    s32 i = 4;
    do {
        (*p++)[1] = v;
    } while (--i >= 0);
}
