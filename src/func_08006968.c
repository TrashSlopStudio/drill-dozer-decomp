#include "types.h"

struct S {
    u32 a;
    u16 b;
    u16 c;
    u16 d;
};

extern struct S *func_080069A8(u16);
extern void func_080066B8(u32, u32);

void func_08006968(u16 x) {
    struct S *p = func_080069A8(x);
    if (p != 0) {
        p->a = 0xFFFF;
        func_080066B8(p->b, p->d);
    }
}
