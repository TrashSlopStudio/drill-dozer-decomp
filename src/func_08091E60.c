#include "types.h"

struct S {
    u8 pad0[0xC];
    u32 unkC;
    u8 pad10[0x14];
    s16 unk24;
    u8 pad26[0x18];
    u16 unk3E;
};

extern u32 func_08014DC0(u32, s16, s16);

u32 func_08091E60(struct S *p) {
    if (func_08014DC0(p->unkC, p->unk24, p->unk3E + 1))
        return 0;
    return 1;
}
