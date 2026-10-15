#include "types.h"

struct S {
    u32 a;
    s32 b;
};
extern struct S gUnk_03006B90;

u32 func_0802A03C(void) {
    s32 v = gUnk_03006B90.b;
    if (v >= 0 && (v & 0xFFFF) != 0)
        return 1;
    return 0;
}
