#include "types.h"
struct R {
    u16 a;
    u16 b;
    u8 c;
    u8 d;
    u16 e;
};
void func_08006450(u8 *p, struct R *t) {
    p[0] = t[p[0]].b;
    p[1] = t[p[0]].d;
}
