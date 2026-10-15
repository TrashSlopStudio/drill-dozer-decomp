#include "types.h"

extern u32 func_0809124C(u32 a, u8 *b);
extern void func_08005B18(u32 a, u32 b);

void func_080912A0(u32 a, u8 *b) {
    u32 t = *(u32 *)(b + 12);
    func_08005B18(t, func_0809124C(a, b));
}
