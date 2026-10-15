#include "types.h"

u32 func_08031078(u8 *p) {
    u32 v = *(u32 *)(p + 0x200);
    if (v != 189 && v != *(u32 *)(p + 0x1F8))
        return 1;
    return 0;
}
