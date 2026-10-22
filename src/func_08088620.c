#include "types.h"

extern int func_0800B6B4(u32, int);
extern void func_08088590(u32 *);
extern void func_08001768(u32);
extern void func_0802A0B0(u32);

void func_08088620(u32 *p) {
    u32 *q = p + 31;
    if (func_0800B6B4(p[3], 4) != 2) {
        func_08088590(p);
        func_08001768(q[4]);
        func_0802A0B0(320);
    }
}
