#include "types.h"

struct B08028858 {
    u8 pad[30];
    u8 a : 4;
    u8 f : 1;
};

void func_08028858(u8 *p, u8 v) {
    struct B08028858 *q = (struct B08028858 *)(p + 124);
    p[0x74] = 0;
    p[0x76] = v;
    q->f = 0;
}
