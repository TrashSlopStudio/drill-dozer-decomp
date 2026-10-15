#include "types.h"

struct S {
    u8 pad[0xF8];
    u8 a;
    s8 b;
    u8 c;
    u8 d;
};

void func_0800C16C(struct S *p) {
    p->a = 0xFF;
    p->b = -1;
    p->c = 2;
    p->d = 2;
}
