#include "types.h"

struct S080B0E10 {
    u32 unk0;
    u32 *unk4;
    u32 unk8;
    u32 unkC;
    struct S080B0E10 **unk10;
    u16 unk14;
    u16 unk16;
};

extern void func_080B06EC(struct S080B0E10 *);

u32 func_080B0E10(struct S080B0E10 *p) {
    struct S080B0E10 *q = *p->unk10;
    q->unk14 = p->unk4[1];
    q->unk16 = p->unk4[2];
    func_080B06EC(p);
    return 0;
}
