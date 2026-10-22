#include "types.h"
extern u32 func_0802FD90(void);
extern void func_080751B0(u8 *p, u32 v);
extern u32 func_08017800(u8 *p);
extern void func_08017884(u8 *p, u32 v);
u32 func_08075070(u8 *p) {
    func_080751B0(p, func_0802FD90());
    if (func_08017800(p) == 1) {
        func_08017884(p, 1);
    }
    *(u32 *)(p + 72) = 2;
    return 1;
}
