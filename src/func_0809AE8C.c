#include "types.h"

struct S8 {
    u32 a;
    u32 b;
};

extern void func_08005560(u32);

void func_0809AE8C(u32 a, u8 *b) {
    u8 *p = *(u8 **)(b + 16);
    *(u32 *)(b + 12) = p[1];
    *(struct S8 *)(b + 32) = *(struct S8 *)(p + 32);
    func_08005560((u32)p);
}
