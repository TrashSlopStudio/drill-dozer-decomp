#include "types.h"

struct S {
    u32 w[12];
};

extern struct S gUnk_080FAF48;

void func_08005560(struct S *p) { *p = gUnk_080FAF48; }
