#include "types.h"

u32 func_08038350(u8 *p) {
    s16 *q = (s16 *)(p + 0x14E);
    *q = 2;
    if (*(u32 *)(p + 0xFC) == 0)
        *q = -*q;
    *(u32 *)(p + 0x48) = 3;
    return 0;
}
