#include "types.h"

extern u32 func_0802A884(u32, s16, s16, u32);

u32 func_0802A6C0(u8 *p, u32 b) {
    if (!func_0802A884(b, *(s16 *)(p + 16), *(s16 *)(p + 20), *(u32 *)(p + 24)))
        return 0;
    return 1;
}
