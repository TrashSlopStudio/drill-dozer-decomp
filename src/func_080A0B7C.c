#include "types.h"
extern void func_08006ABC(u32);

struct S {
    u8 pad[4];
    u8 a[32];
};

void func_080A0B7C(u8 *p) {
    struct S *q = (struct S *)(p + 124);
    s32 i;

    for (i = 0; i < 32; i++) {
        if (q->a[i] != 0xFF)
            func_08006ABC(q->a[i]);
    }
}
