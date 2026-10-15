#include "types.h"

struct S {
    u32 a;
    u16 b;
    u16 c;
};

extern void func_08005560(u32);

void func_080B67E8(struct S *p) {
    if (p->c != 0)
        func_08005560(p->a);
}
