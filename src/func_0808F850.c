#include "types.h"

s32 func_0808F850(u8 *p) {
    s16 *a = (s16 *)(p + 0x56);
    s16 *b = (s16 *)(p + 0x58);
    return *a != *b ? *a * 100 / *b : 100;
}
