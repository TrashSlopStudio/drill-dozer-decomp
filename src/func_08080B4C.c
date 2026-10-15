#include "types.h"
extern void func_080067CC(u32, u8 *);
extern void func_08006ABC(u32);
extern void func_0807E98C(u32);
void func_08080B4C(u32 unused, u8 *p) {
    func_080067CC(*(u32 *)(p + 24), p + 28);
    func_08006ABC((u32)(*(u8 *)(*(u32 *)(p + 24) + 0x23) << 26) >> 27);
    func_0807E98C(*(u32 *)(p + 24));
}
