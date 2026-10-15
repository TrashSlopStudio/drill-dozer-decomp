#include "types.h"

struct S {
    u8 pad[0x30];
    u8 *arr[1];
};

extern struct S *gUnk_0203610C;

void func_0807B7D0(u8 a, u8 b) {
    if (gUnk_0203610C != 0)
        gUnk_0203610C->arr[a][1] = b;
}
