#include "types.h"

extern void func_080067D8(u32 a, u32 b);
extern void func_08005B18(u32 a, u32 b);

void func_0807EB04(u32 a, u32 b, u32 c) {
    func_080067D8(a, b);
    func_08005B18(a, c);
}
