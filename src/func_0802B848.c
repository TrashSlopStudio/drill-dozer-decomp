#include "types.h"

extern u8 gUnk_020358A4[];
extern void *gUnk_020358AC;
extern void func_080FAAC8(void *, int, int);
extern void *func_08001728(u32);

void func_0802B848(void) {
    void **p;
    func_080FAAC8(gUnk_020358A4, 0, 8);
    p = &gUnk_020358AC;
    *p = func_08001728(16);
}
