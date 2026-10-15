#include "types.h"

extern void func_080067CC(u32, u8 *);
extern void func_0807E98C(u32);

void func_08093AE4(u32 a, u8 *b) {
    func_080067CC(*(u32 *)(b + 40), b + 44);
    func_0807E98C(*(u32 *)(b + 40));
}
