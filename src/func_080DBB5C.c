#include "types.h"

extern u32 func_0800B220(u32);

u32 func_080DBB5C(u8 *a, u8 *p) {
    if (p[10] == 1 || func_0800B220(*(u32 *)p) != 1)
        return 1;
    return 0;
}
