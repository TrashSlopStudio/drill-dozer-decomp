#include "types.h"

u32 func_080DC7F8(u8 *p) {
    if (p[7] == 0 && ++*(s16 *)(p + 8) > 60)
        return 6;
    return 5;
}
