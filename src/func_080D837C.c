#include "types.h"

extern void func_080D82DC(u8 *, u32, u32);

u32 func_080D837C(u8 *p) {
    func_080D82DC(p, 96, 97);
    (*(u32 *)(p + 524))++;
    return 1;
}
