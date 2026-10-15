#include "types.h"

extern u8 gUnk_084C0D18[];
extern void func_08005814(u32, void *);

void func_080E587C(u8 *p) {
    u32 v = *(u32 *)(p + 4);
    if (v != 0)
        func_08005814(v, gUnk_084C0D18);
}
