#include "types.h"

extern void func_08064B10(u8 *);

u32 func_080645C0(u8 *p) {
    if (++*(u32 *)(p + 4) > *(u32 *)(*(u8 **)(p + 0x4C) + 4))
        func_08064B10(p);
    return 0;
}
