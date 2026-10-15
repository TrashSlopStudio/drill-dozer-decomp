#include "types.h"
extern void func_08012884(u32);
extern void func_08006ABC(u32);

void func_080A73C8(u8 *p) {
    u8 *q = p + 124;

    *(u32 *)(p + 124) = 0;
    func_08012884(175);
    func_08006ABC(q[4]);
}
