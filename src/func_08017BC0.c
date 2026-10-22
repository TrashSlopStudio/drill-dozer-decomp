#include "types.h"

u32 func_08017BC0(u8 *p) {
    u32 r = *(u32 *)(p + 0x3F4);
    u8 *q;
    u32 n;
    if (r == 3) {
        q = *(u8 **)(p + 0x30);
        n = q[0xEF] != 0;
        if (q[0xF0] != 0)
            n++;
        return n;
    }
    return r;
}
