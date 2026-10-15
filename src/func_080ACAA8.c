#include "types.h"

extern void func_080067CC(u32, u8 *);
extern void func_0807E98C(u32);
extern void func_08012884(u32);

void func_080ACAA8(u32 a, u8 *p) {
    *(u32 *)(p + 8) = (*(u8 **)(p + 12))[1];
    func_080067CC(*(u32 *)(p + 12), p + 16);
    func_0807E98C(*(u32 *)(p + 12));
    func_08012884(177);
}
