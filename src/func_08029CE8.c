#include "types.h"
struct S {
    u32 a;
    s32 b;
};
extern struct S gUnk_03006AD0;
u32 func_08029CE8(void) {
    s32 v = gUnk_03006AD0.b;
    if (v >= 0 && (v & 0xFFFF) != 0)
        return 0;
    return 1;
}
