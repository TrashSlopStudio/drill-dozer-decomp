#include "types.h"

extern s32 func_080BF4A0(u32 *);
extern void func_080C0694(u32, u32);
extern void func_080BF48C(u32 *, u32);

u32 func_080BF944(u32 *p) {
    if (func_080BF4A0(p) != 1) {
        func_080C0694(p[29], 3);
        func_080BF48C(p, 2);
        p[0] = 16;
    }
    return 0;
}
