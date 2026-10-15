#include "types.h"
struct B {
    u8 pad[0x25];
    u8 a : 2;
    u8 b : 2;
};
struct G {
    struct B *b;
    u8 pad[0x18];
    u8 f;
};
extern struct G *gUnk_02035898;
void func_0802B7F4(u32 v) {
    gUnk_02035898->f = v;
    gUnk_02035898->b->b = v;
}
