#include "types.h"

extern u8 gUnk_082C3CE0[][2];

void func_08045124(u32 i, u8 *a, u8 *b) {
    *a = gUnk_082C3CE0[i][0];
    *b = gUnk_082C3CE0[i][1];
}
