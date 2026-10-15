#include "types.h"
struct A {
    u8 pad[22];
    u16 y, x;
};
void func_0800E0AC(struct A *a, u16 *r, u16 *o) {
    u16 y = a->y;
    u16 x;
    o[2] = y + r[2];
    o[3] = y + r[3];
    x = a->x;
    o[0] = x + r[0];
    o[1] = x + r[1];
}
