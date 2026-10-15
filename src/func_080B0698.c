#include "types.h"

struct E {
    u32 a;
    u32 (*fn)(void *);
};

extern struct E gUnk_0841E828[];

u32 func_080B0698(u32 **p) { return gUnk_0841E828[*p[1]].fn(p); }
