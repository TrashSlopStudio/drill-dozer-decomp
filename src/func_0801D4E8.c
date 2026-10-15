#include "types.h"

struct S {
    u8 pad0[12];
    int f0c;
    u8 pad1[4];
    struct S *f14;
    u8 pad2[4];
    u16 f1c;
    u16 f1e;
    u16 f20;
    u16 f22;
    u16 f24;
    u16 f26;
};

void func_0801D4E8(struct S *p) {
    struct S *q = p->f14;
    if (q != 0) {
        if (q->f0c == 0) {
            p->f14 = 0;
        } else {
            p->f20 = q->f24 + p->f1c;
            p->f22 = q->f26 + p->f1e;
        }
    }
}
