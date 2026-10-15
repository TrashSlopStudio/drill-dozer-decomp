#include "types.h"

void func_08027BB4(u8 *p) {
    if ((s8)p[0x54] == 2) {
        *(int *)(p + 0x4C) = -0x20000;
    } else {
        *(int *)(p + 0x4C) = 0x20000;
    }
    *(int *)(p + 0x50) = 0;
}
