#include "types.h"

extern u8 gUnk_083E90E8[];
extern void func_08005814(void *, void *);
extern void func_08005B18(void *, void *);

void func_0809A7D0(void *a, s32 b) {
    if (b == 0)
        func_08005814(a, gUnk_083E90E8);
    else
        func_08005B18(a, gUnk_083E90E8);
}
