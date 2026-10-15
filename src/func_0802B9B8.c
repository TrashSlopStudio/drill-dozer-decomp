#include "types.h"
struct S {
    u8 a, b, c, d, e, f;
    u8 g : 1;
};
void func_0802B9B8(u8 *a, struct S *b, u32 c) {
    b->b = 0;
    b->a = 1;
    *(u16 *)(a + 0xA8) += c;
    b->g = 1;
    b->f = 1;
}
