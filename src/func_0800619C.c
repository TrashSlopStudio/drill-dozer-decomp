#include "types.h"

struct R {
    u32 x;
    u16 a, b, c, d;
};
extern struct R gUnk_02023848[];

void func_0800619C(u8 i, u16 a, u16 b, u16 c) {
    struct R *r = &gUnk_02023848[i];
    r->a = a;
    r->b = b;
    r->c = c;
}
