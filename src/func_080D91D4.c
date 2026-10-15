#include "types.h"

extern void func_08031054(u8 *, u32);

u32 func_080D91D4(u8 *p) {
    func_08031054(p, 324);
    (*(u32 *)(p + 524))++;
    return 1;
}
