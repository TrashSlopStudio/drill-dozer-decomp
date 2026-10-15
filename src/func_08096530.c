#include "types.h"

extern void func_08096C94(u8 *);
extern void func_08019B54(u32);
extern void func_08096F20(u8 *, u32);

u32 func_08096530(u8 *a, u8 *b) {
    func_08096C94(b);
    func_08019B54(1);
    func_08096F20(b, 1);
    return 1;
}
