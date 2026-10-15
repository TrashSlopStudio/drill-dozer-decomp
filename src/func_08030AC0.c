#include "types.h"

extern void func_08005BBC(u32, u32, u32);
extern void func_08021AE0(u8 *, u32, u32);

void func_08030AC0(u8 *a, u8 *b) {
    func_08005BBC(*(u32 *)(a + 0x2B0), *(u32 *)(b + 0x20), 3);
    func_08021AE0(a, 3, *(u32 *)(b + 0x20));
}
