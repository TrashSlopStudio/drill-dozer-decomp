#include "types.h"

void func_08045C90(u8 **p, u32 v) {
    s32 i;

    if (((u8 *)p)[50] & 2) {
        i = 3;
        do {
            (*p++)[1] = v;
        } while (--i >= 0);
    }
}
