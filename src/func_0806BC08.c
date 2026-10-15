#include "types.h"
extern int func_0806C550(u32, u8, u32);
extern void func_080057F0(u32, u32, u32);
int func_0806BC08(u32 a, u8 *p) {
    if (func_0806C550(*(u32 *)p, p[22], 0) == 1) {
        func_080057F0(*(u32 *)p, 0, 0);
        p[12] = 4;
    }
    return 1;
}
