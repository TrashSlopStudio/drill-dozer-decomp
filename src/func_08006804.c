#include "types.h"

struct S {
    u32 a, b, c;
};

extern struct S gUnk_02023848[];

void func_08006804(u8 i, struct S *s) { gUnk_02023848[i] = *s; }
