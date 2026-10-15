#include "types.h"

extern void func_08005560(u32);
extern u32 *func_0807E620(u32);

void func_0802A860(u32 a, u32 *b) {
    u32 *p;

    func_08005560(*b);
    p = func_0807E620(a);
    if (*p == a)
        *p = 0;
}
