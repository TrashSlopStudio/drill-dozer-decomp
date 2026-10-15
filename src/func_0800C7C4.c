#include "types.h"

struct S {
    u32 a, b, c, d;
};

extern struct S gUnk_02034748;
extern u32 func_080F8FB8(u32, u32);

u32 func_0800C7C4(u32 a) {
    u32 r;
    if (gUnk_02034748.d != 0) {
        r = func_080F8FB8(a, gUnk_02034748.d);
        if (r == 1)
            gUnk_02034748.d = 0;
        return r;
    }
    return 1;
}
