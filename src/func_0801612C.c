#include "types.h"

struct N {
    u8 pad[0x40];
    struct N *next;
};

struct H {
    u8 pad[0x34];
    struct N *cur;
};

void func_0801612C(struct H *h, u32 c) {
    struct N *a = h->cur;
    struct N *b = a->next;
    if (b != 0) {
        a->next = 0;
        b->next = 0;
        if (c == 0)
            h->cur = a;
        else
            h->cur = b;
    }
}
