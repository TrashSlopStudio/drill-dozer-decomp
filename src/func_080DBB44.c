#include "types.h"

extern u32 func_0800B220(u32);

u32 func_080DBB44(u8 *a, u8 *p) {
    if (func_0800B220(*(u32 *)p) == 1)
        return 0;
    return 1;
}
