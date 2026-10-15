#include "types.h"

extern u32 *func_0800098C(u32);

u32 func_080F066C(u8 *a) {
    u32 *q;
    u32 v = *(u32 *)(a + 100);
    if (v == 0)
        return 1;
    q = func_0800098C(v);
    if (q[0] == 0 && q[1] == 16)
        return 1;
    return 0;
}
