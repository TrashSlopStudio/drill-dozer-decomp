#include "types.h"

extern u32 func_0801239C(u32, u32, u32 *);

u32 func_080239C4(u8 *p) {
    u32 v = 0;
    if (func_0801239C(*(u32 *)(p + 12), 92, &v) != 255)
        return 1;
    return 0;
}
