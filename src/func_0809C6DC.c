#include "types.h"

struct S {
    u8 pad[0x58];
    u8 f[4];
};

u32 func_0809C6DC(u32 a, struct S *p) {
    s32 i;
    for (i = 0; i <= 3; i++) {
        if (p->f[i] != 2)
            return 0;
    }
    return 1;
}
