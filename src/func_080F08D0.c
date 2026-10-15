#include "types.h"

extern u32 *func_0800098C(u32 *);

u32 func_080F08D0(u8 *p) {
    u32 *q = *(u32 **)(p + 0x68);
    if (q == 0)
        return 1;
    return func_0800098C(q)[1];
}
