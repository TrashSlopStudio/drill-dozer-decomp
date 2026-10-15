#include "types.h"

struct S {
    u8 pad[0x4020];
    u32 arr[1][2];
};

extern void func_08005814(u32, u32);
extern u8 gUnk_084F1004[];

void func_080F5048(struct S *a, u32 b) { func_08005814(a->arr[b][0], (u32)gUnk_084F1004); }
