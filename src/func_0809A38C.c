#include "types.h"

extern void func_08005BBC(int, int, int);
extern u8 gUnk_083E9050[];

u32 func_0809A38C(u8 *a) {
    u8 *p = *(u8 **)(a + 0x7C);
    if (p[14] == 1)
        return 1;
    func_08005BBC((int)p, (int)gUnk_083E9050, 0);
    return 0;
}
