#include "types.h"

struct E {
    u32 a;
    u32 (*f)(u8 *);
};
extern struct E gUnk_0833046C[];

u32 func_08064B1C(u8 *p) { return gUnk_0833046C[**(u32 **)(p + 0x4C)].f(p); }
