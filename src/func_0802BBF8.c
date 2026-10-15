#include "types.h"

u16 func_0802BBF8(u8 *p) {
    u16 *q = (u16 *)(p + 0xA8);
    if (*q > 10000)
        *q = 10000;
    return *q;
}
