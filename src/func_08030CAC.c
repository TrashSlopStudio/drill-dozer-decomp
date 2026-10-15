#include "types.h"

extern void func_08005BBC(u32, u32, u32);
extern void func_08021AFC(u32, u32, u32);

void func_08030CAC(u32 a, u32 *b) {
    func_08005BBC(*(u32 *)(a + 692), b[9], 3);
    func_08021AFC(a, 3, b[9]);
}
