#include "types.h"

void func_08029668(s32 *p) {
    s32 v = *p + 0x10000;
    *p = v;
    if (v > 0x60000)
        *p = 0x60000;
}
