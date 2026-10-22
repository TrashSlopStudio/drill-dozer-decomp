#include "types.h"

extern s32 func_08082C40(u32);
extern void func_08082D34(u8 *, u32);

void func_08082D0C(u8 *p) {
    u8 *q = p + 0x7C;
    if (func_08082C40(*(u32 *)(p + 12)) == 1 && *q == 0) {
        func_08082D34(p, 2);
    }
}
