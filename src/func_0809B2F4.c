#include "types.h"

extern void func_080067CC(u32, u8 *);
extern void func_0807E98C(u32);

void func_0809B2F4(u32 a, u8 *b) {
    func_080067CC(*(u32 *)(b + 4), b + 8);
    func_0807E98C(*(u32 *)(b + 4));
}
