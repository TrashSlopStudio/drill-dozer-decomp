#include "types.h"

extern void func_080D82DC(u8 *, u32, u32);

u32 func_080D835C(u8 *p) {
    func_080D82DC(p, 97, 96);
    (*(u32 *)(p + 524))++;
    return 1;
}
