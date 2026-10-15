#include "types.h"
struct P {
    u32 a, b;
};
struct R {
    u32 x;
    struct P p;
};
extern struct R gUnk_02023848[];

void func_080062F4(u8 i, struct P *out) { *out = gUnk_02023848[i].p; }
