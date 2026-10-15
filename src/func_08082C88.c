#include "types.h"

extern u32 func_08082C40(u32);
extern void func_08082D34(u8 *, u32);

void func_08082C88(u8 *p) {
    if (func_08082C40(*(u32 *)(p + 12)) == 1) {
        func_08082D34(p, 2);
        p[0x76] = 100;
    }
}
