#include "types.h"

extern u8 gUnk_02034C3E[];

void func_0801291C(void) {
    s32 i;

    for (i = 0; i < 8; i++)
        gUnk_02034C3E[i] |= 0xFF;
}
