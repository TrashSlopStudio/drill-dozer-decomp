#include "types.h"

extern void func_08012BAC(void *p, s16 a, s16 b);

u32 func_0805E92C(u8 *p, u8 *q) {
    func_08012BAC(q + 32, *(s16 *)(p + 36), *(s16 *)(p + 38));
    p[119] = 1;
    return 2;
}
