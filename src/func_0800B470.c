#include "types.h"

u32 func_0800B470(u8 *p) {
    u32 r = p[0xEF] != 0;
    if (p[0xF0] != 0)
        r++;
    return r;
}
