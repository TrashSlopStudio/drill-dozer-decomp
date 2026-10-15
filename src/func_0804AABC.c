#include "types.h"
u8 *func_0804AABC(u8 *dst, u8 *src) {
    while (*src != 0xFF) {
        *dst = *src;
        dst++;
        src++;
    }
    *dst = 0xFF;
    return dst;
}
