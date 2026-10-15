#include "types.h"

struct S {
    u8 pad[4];
    u8 a : 1;
    u8 b : 7;
};
extern struct S gUnk_020360F4;
extern void func_08073F14(void);

void func_08073EB0(s32 x) {
    gUnk_020360F4.a = x;
    if (x == 0)
        func_08073F14();
}
