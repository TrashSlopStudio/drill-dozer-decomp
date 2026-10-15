#include "types.h"

struct S {
    u16 unk0;
    u32 unk4;
};

extern void func_080066B8(u32, u32);
extern void func_08005560(u32);

void func_0805D10C(struct S *p) {
    if (p->unk4 != 0) {
        func_080066B8(p->unk0, 56);
        if (p->unk4 != 0)
            func_08005560(p->unk4);
    }
}
