#include "types.h"

struct S {
    u32 a;
    u32 b;
};
struct R {
    u32 x;
    struct S s;
};
extern struct R gUnk_02023848[];

void func_080061D4(u8 i, struct S *p) { gUnk_02023848[i].s = *p; }
