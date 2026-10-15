#include "types.h"

u32 func_080B44A8(u8 *p) {
    if (*(u32 *)(p + 24) == 0x00FF00FF)
        return 1;
    return 0;
}
