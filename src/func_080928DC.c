#include "types.h"

extern u32 func_0800CFC4(u32, u8 *);

u32 func_080928DC(u8 *p) {
    if (!func_0800CFC4(*(u32 *)(p + 12), p + 32))
        return 1;
    return 4;
}
