#include "types.h"

struct S {
    u8 pad[0x74];
    u8 a;
    u8 pad2;
    u8 b;
    u8 c;
};

void func_08091F34(struct S *p, u16 *v) {
    p->b = 0;
    p->c = 0;
    p->a = *v;
}
