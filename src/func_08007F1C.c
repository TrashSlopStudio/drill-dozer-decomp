#include "types.h"

u32 func_08007F1C(u8 *p) {
    u8 *q = *(u8 **)p;
    if (*(s16 *)(p + 8) == *(s16 *)(q + 20)) {
        return 0;
    }
    if (*(s16 *)(p + 10) != *(s16 *)(q + 24)) {
        return 1;
    }
    return 0;
}
