#include "types.h"

void func_08075284(u32 *p) {
    if (p[1] <= 0x19999) {
        s32 v = p[1] + 0x6D3;
        p[1] = v;
        if (v > 0x19999)
            p[1] = 0x19999;
    }
}
