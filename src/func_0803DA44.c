#include "types.h"
extern void func_08040764(void);
void func_0803DA44(u8 *p, s32 *c, u32 v, s32 n) {
    u16 *h = (u16 *)(p + 330);
    s32 z = 0;
    *h = z;
    if (++*c >= n) {
        *c = z;
        *h = v;
        func_08040764();
    }
}
