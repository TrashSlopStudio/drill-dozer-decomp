#include "types.h"

struct B {
    u8 f : 8;
};

extern void func_08006ABC(u32);

void func_080A0BA0(u8 *a) {
    u8 *p = a + 128;
    s32 i;
    for (i = 0; i < 32; i++) {
        func_08006ABC(((struct B *)p)->f);
        ((struct B *)p)->f |= 0xFF;
        p++;
    }
}
