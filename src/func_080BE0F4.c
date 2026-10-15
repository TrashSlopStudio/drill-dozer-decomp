#include "types.h"

u32 func_080BE0F4(u8 *p) {
    if (*(u32 *)(p + 8) == 0)
        return 1;
    (*(u32 *)(p + 8))--;
    return 0;
}
