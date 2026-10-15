#include "types.h"

u32 func_0804AF04(u8 *p) {
    u32 n;
    for (n = 0; *p != 0xFF; n++) {
        if (*p == 0xF9)
            p++;
        p++;
    }
    return n;
}
