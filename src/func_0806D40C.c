#include "types.h"

struct S {
    u8 pad[0xA8];
    u8 a : 4;
    u8 b : 1;
};
extern struct S *gUnk_02036068;

u32 func_0806D40C(void) { return gUnk_02036068->b; }
