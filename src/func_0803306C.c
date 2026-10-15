#include "types.h"

void func_0803306C(u8 *p) {
    s32 i, j;

    for (i = 0; i < 16; i++) {
        for (j = 0; j < 16; j++) {
            (*(u8 **)(p + 0x9C))[i * 16 + j] = i * 16 + j;
        }
    }
}
