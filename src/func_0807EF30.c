#include "types.h"

extern void func_0807E98C(u32);
extern u32 func_08011720(u32);
extern void func_08011A40(u32, u32);

void func_0807EF30(u8 *a, u8 *b) {
    func_0807E98C(*(u32 *)(b + 24));
    func_08011A40(func_08011720(*(u32 *)(a + 36)), 128);
}
