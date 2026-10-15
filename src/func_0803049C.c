#include "types.h"

extern u8 *func_08011720(s32);

void func_0803049C(s32 a, s32 b, s32 c) {
    u8 *p = func_08011720(a);
    *(s32 *)(p + 0x168) += b;
    *(s32 *)(p + 0x16C) += c;
}
