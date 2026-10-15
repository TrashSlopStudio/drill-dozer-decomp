#include "types.h"

extern u32 func_08056294(u8 *, u8 *);

u32 func_080CA008(u8 *p) {
    u8 *q = p + 0x7C;
    if (q[10] != 1 && func_08056294(p, p + 60) != 0)
        return 1;
    return 0;
}
