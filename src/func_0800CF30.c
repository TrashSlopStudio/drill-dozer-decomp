#include "types.h"

u16 func_0800CF30(s16 x) {
    if (x < 0)
        return (-x << 8) | 0x8000;
    if (x > 0)
        return x << 8;
    return 0;
}
