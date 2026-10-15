#include "types.h"

struct S8 {
    u32 a, b;
};

void func_08036208(u8 *p, u32 a, u32 b, struct S8 *s) {
    *(u32 *)(p + 0x94) = a;
    *(u32 *)(p + 0x98) = b;
    *(struct S8 *)(p + 400) = *s;
}
