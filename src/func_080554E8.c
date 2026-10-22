#include "types.h"
extern void func_080554DC(u32, u32);
extern u32 func_0801BC0C(u32 *, u32);
void func_080554E8(void) {
    u32 i;
    u32 x = 0;
    u32 r;
    goto in;
    do {
        func_080554DC(r, i);
        i++;
        if (i > 3) {
        in:
            i = 0;
        }
    } while ((r = func_0801BC0C(&x, 227)) != 0);
}
