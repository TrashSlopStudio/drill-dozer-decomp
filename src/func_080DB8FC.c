#include "types.h"

u32 func_080DB8FC(u8 *p, u32 b) {
    p += 0x7C;
    if (*(u32 *)(p + 4) == b)
        return 1;
    return 0;
}
