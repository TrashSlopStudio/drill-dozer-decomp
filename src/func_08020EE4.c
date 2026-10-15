#include "types.h"

extern int func_08011AC4(void *);
extern void func_08020E2C(void *, u32);
extern u32 gUnk_0823E1F0[];

void func_08020EE4(void *p) {
    u32 v = func_08011AC4(p);
    v = gUnk_0823E1F0[v];
    func_08020E2C(p, v);
}
