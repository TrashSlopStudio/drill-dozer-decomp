#include "types.h"

struct S {
    u32 a, b, c;
};

extern struct S gUnk_02023848[];

void func_080067E4(u8 i, struct S *d) { *d = gUnk_02023848[i]; }
