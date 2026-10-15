#include "types.h"

struct B {
    u8 pad[35];
    u8 a : 1;
    u8 b : 5;
};

extern void func_08006130(u32, u32, u32);

void func_080EFDBC(u8 *p) {
    u8 *q = p + 0x7C;
    func_08006130((*(struct B **)(q + 4))->b, 0, 0);
    q[9] = 2;
}
