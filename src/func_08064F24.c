#include "types.h"

u32 func_08064F24(u8 *p, u32 n) {
    u32 v = *(u32 *)(p + 16) + 1;
    *(u32 *)(p + 16) = v;
    if (v >= n) {
        *(u32 *)(p + 16) = 0;
        return 1;
    }
    return 0;
}
