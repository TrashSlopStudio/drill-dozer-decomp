#include "types.h"

extern void func_080067CC(u32, u8 *);
extern void func_0807E98C(u32);

void func_080808BC(u32 a, u8 *p) {
    func_080067CC(*(u32 *)(p + 16), p + 20);
    func_0807E98C(*(u32 *)(p + 16));
}
