#include "types.h"

extern u32 func_08017DD8(u8 *p);

u32 func_08017758(u8 *p) {
    u32 r = func_08017DD8(p);
    if (r == 0)
        return 0;
    if (r != 4)
        *(u32 *)(p + 0x40C) = 8;
    return 1;
}
