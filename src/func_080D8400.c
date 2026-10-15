#include "types.h"

extern void func_080D82DC(u8 *, u32, u32);

u32 func_080D8400(u8 *p) {
    func_080D82DC(p, 100, 101);
    (*(u32 *)(p + 524))++;
    return 1;
}
