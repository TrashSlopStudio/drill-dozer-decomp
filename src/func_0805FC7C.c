#include "types.h"

void func_0805FC7C(u32 a, u8 **p, u32 v, u32 f) {
    s32 i;

    if (f != 0) {
        p[5][13] = v;
    } else {
        for (i = 0; i <= 5; i++) {
            if (i != 5)
                p[i][13] = v;
        }
    }
}
