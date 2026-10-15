#include "types.h"
struct S {
    u8 pad[0x162];
    s16 f;
};
s16 func_0802FE7C(struct S *p) {
    s16 v = p->f;
    s32 x = p->f;
    if (x < 0)
        v = -x;
    return v;
}
