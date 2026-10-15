#include "types.h"

extern u32 func_0802B528(u32, s16, s16);

u32 func_0802B370(u8 *p, u32 b) {
    if (!func_0802B528(b, *(s16 *)(p + 16), *(s16 *)(p + 20)))
        return 0;
    return 1;
}
