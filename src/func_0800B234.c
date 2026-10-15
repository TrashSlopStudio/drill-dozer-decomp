#include "types.h"

u32 func_0800B234(u8 *p, u32 m) {
    if (*(u16 *)(p + 30) & m)
        return 1;
    return 0;
}
