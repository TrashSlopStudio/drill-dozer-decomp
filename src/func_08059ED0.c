#include "types.h"

struct S {
    u8 pad[23];
    u8 f17;
    u8 pad2[2];
    u8 a : 1;
    u8 b : 1;
};

u32 func_08059ED0(struct S *p) {
    p->a = 0;
    p->b = 0;
    p->f17 = 1;
    return 0;
}
