#include "types.h"

u32 func_080C202C(u8 *p) {
    if ((*(u32 *)(p + 8) & 0xFF00FFFF) == 0x01000000)
        return 1;
    return 0;
}
