#include "types.h"

u32 func_080C7D38(u8 *a, u8 *b) {
    if (a[0xC5] != 0) {
        return 0;
    }
    *b = 20;
    return 1;
}
