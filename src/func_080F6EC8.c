#include "types.h"

struct S {
    u32 pad;
    u32 status;
    u8 pad2[0x2C];
    u32 id;
};

void func_080F6EC8(struct S *p) {
    if (p->id == 0x68736D53) {
        p->id++;
        p->status &= 0x7FFFFFFF;
        p->id = 0x68736D53;
    }
}
