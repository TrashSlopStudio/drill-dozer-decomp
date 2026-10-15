#include "types.h"

extern void func_0809385C(u8 *, u32 *);
extern void func_08093960(u8 *, u32 *);

u32 func_08093748(u8 *a, u32 *b) {
    func_0809385C(a, b);
    func_08093960(a, b);
    b[1] = 0;
    b[0] = 0;
    return 1;
}
