#include "types.h"

struct E {
    u8 unk0;
    u8 unk1;
    u8 pad2[0x12];
    u16 unk14;
    u16 unk16;
};

struct S {
    struct E *e[4];
    u8 f[4];
};

void func_0801ED0C(struct S *s, u32 i, u16 *v) {
    s->e[i]->unk14 = v[0];
    s->e[i]->unk16 = v[1];
    s->e[i]->unk1 = 0;
    s->f[i] = 0;
}
