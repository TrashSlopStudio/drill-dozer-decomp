#include "types.h"

struct S {
    u16 a;
    u16 pad;
    s8 f;
};

extern struct S gUnk_020360F4;
extern void func_08073F14(void);

void func_08073DF8(u16 v) {
    gUnk_020360F4.a = v;
    if (!(gUnk_020360F4.f & 2))
        func_08073F14();
    gUnk_020360F4.f &= ~2;
}
