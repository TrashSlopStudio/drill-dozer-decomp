#include "types.h"

void func_080A3468(u8 *p) {
    if (*(s16 *)(p + 20) + 32 < 0)
        p[1] = 1;
}
