#include "types.h"

u16 func_0804AB40(u8 *s) {
    u16 n = 0;

    while (s[n] != 0xFF)
        n++;
    return n;
}
