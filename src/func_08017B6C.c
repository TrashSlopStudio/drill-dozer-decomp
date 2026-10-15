#include "types.h"

u32 func_08017B6C(u8 *p) {
    if (*(u32 *)(p + 0x3F8) == 1)
        return *(u32 *)(p + 0x3FC);
    return *(u32 *)(p + 0x438);
}
