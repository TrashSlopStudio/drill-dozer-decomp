#include "types.h"

struct S {
    u32 unk0;
    struct S *sub;
    u32 unk8;
    s32 unkC;
    u8 pad10[8];
    u16 x;
    u16 y;
};

extern struct S *gUnk_02036008;
extern void func_0804B0A8(u32);

void func_0804B070(u32 a) {
    s32 v = gUnk_02036008->unkC;
    func_0804B0A8(a);
    gUnk_02036008->sub->x = v;
    gUnk_02036008->sub->y = v >> 16;
    gUnk_02036008->unkC = v;
}
