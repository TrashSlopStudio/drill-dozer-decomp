#include "types.h"

struct S {
    u8 pad[27];
    u8 f;
    u8 pad2[4];
};

extern struct S gUnk_02021448[];

void func_08004230(void) {
    struct S *b = gUnk_02021448;
    u8 z = 0;
    struct S *p = b + 31;
    do {
        p->f = z;
        p--;
    } while ((s32)p >= (s32)b);
}
