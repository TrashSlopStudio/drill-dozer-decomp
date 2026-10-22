#include "types.h"

extern u32 gUnk_084884F8[];
extern s32 func_080F8FB8(u8 *a, u32 b);
extern void func_0801B1C4(u8 *a);

void func_080DAB98(u8 *p) {
    if (func_080F8FB8(p, gUnk_084884F8[p[0x74]]) != 0) {
        func_0801B1C4(p);
    }
}
