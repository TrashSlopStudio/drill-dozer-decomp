#include "types.h"

extern void func_0802140C(u32, u32);
extern u32 func_08019B88(void);

u32 func_080E2C54(u32 *p) {
    func_0802140C(p[7], 138);
    if ((u8)func_08019B88() == 0) {
        p[4] = 1;
        p[0] = 2;
    }
    return 0;
}
