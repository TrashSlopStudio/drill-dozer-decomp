#include "types.h"

s32 func_08015EB8(u8 *p, u8 c) {
    if (c == 0)
        return *(s16 *)(p + 20);
    return *(s16 *)(p + 22);
}
