#include "types.h"
struct B {
    u8 pad[0x21];
    s8 a : 2;
};
void func_0802153C(u8 *p, u32 v) {
    struct B *b = *(struct B **)(p + 0x2AC);
    u8 t = v;
    b->a = t;
}
