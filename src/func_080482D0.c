#include "types.h"

struct S {
    u32 pad;
    u8 *arr[3];
};

extern struct S *gUnk_02035A74;

void func_080482D0(s32 i, u32 v) {
    if (i <= 2)
        gUnk_02035A74->arr[i][1] = v;
}
