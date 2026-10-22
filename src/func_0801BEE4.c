#include "types.h"

extern struct {
    u16 a;
    u16 b;
} gUnk_08230228[];

void func_0801BEE4(u32 a, volatile u32 *b, u16 *c, u16 *d) {
    *c = gUnk_08230228[(*b << 4) >> 28].a;
    *d = gUnk_08230228[(*b << 4) >> 28].b;
}
