#include "types.h"
struct B {
    u8 pad[0x21];
    u8 f : 2;
};
void func_08020C78(u8 *p, u8 v) {
    struct B *b = *(struct B **)(p + 0x2B0);
    u32 t = v;
    b->f = t;
}
