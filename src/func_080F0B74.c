#include "types.h"

u32 func_080F0B74(u8 *s) {
    u32 i = 0;
    while (s[i] != 0xFF)
        i++;
    return i;
}
