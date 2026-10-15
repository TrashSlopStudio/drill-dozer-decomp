#include "types.h"

u32 func_080B66DC(u8 *p) {
    if (*(u16 *)(p + 26) != 0)
        return 0;
    return 1;
}
