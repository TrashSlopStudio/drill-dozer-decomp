#include "types.h"

struct S {
    u32 unk0;
    u32 *unk4;
    u8 pad8[0x28];
    u32 unk30;
};

extern void func_080B06EC(struct S *);

u32 func_080B0C80(struct S *p) {
    if (++p->unk30 > p->unk4[1])
        func_080B06EC(p);
    return 0;
}
