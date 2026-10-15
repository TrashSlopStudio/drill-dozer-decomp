#include "types.h"

struct S {
    u16 a;
    u16 b;
};

extern struct S gUnk_0824A444[];
extern void func_08029BB4(u16);

void func_08029BC4(void) {
    u32 i;

    for (i = 0; i <= 3; i++)
        func_08029BB4(gUnk_0824A444[i].a);
}
