#include "types.h"

struct S {
    u8 pad[0x4020];
    u8 *arr[2][2];
};

void func_080F5140(struct S *a, u32 v) {
    u8 **q = a->arr[0];
    s32 i = 1;
    do {
        (*q)[1] = v;
        q += 2;
    } while (--i >= 0);
}
