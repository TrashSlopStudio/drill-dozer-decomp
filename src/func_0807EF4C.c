#include "types.h"

extern void func_080067CC(u32, u8 *);
extern void func_0807E98C(u32);

void func_0807EF4C(u32 a, u8 *b) {
    *(u32 *)(b + 20) = (*(u8 **)(b + 24))[1];
    func_080067CC(*(u32 *)(b + 24), b + 28);
    func_0807E98C(*(u32 *)(b + 24));
}
