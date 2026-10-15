#include "types.h"

extern void func_080067CC(u32, u8 *);
extern void func_0807E98C(u32);

void func_080C087C(u32 a, u8 *p) {
    *(u32 *)(p + 28) = (*(u8 **)(p + 32))[1];
    func_080067CC(*(u32 *)(p + 32), p + 36);
    func_0807E98C(*(u32 *)(p + 32));
}
