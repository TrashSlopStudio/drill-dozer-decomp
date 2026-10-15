#include "types.h"

struct S {
    u8 pad[350];
    u8 a;
    u8 b;
};

void func_0800C034(struct S *p) {
    p->a = p->b;
    p->b = 0;
}
