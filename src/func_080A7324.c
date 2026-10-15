#include "types.h"
u32 func_080A7324(u8 *p) {
    p += 0x7C;
    if (*(u32 *)(p + 0x30) == 1) {
        *(u32 *)(p + 0x34) = 1;
        return *(u32 *)(p + 0x1C);
    }
    return 2;
}
