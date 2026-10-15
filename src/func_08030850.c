#include "types.h"

extern void func_08005BBC(u32, u32, u32);
extern void func_08021AC4(u8 *, u32, u32);

void func_08030850(u8 *a, u8 *b) {
    func_08005BBC(*(u32 *)(a + 0x2AC), *(u32 *)(b + 28), 3);
    func_08021AC4(a, 3, *(u32 *)(b + 28));
}
