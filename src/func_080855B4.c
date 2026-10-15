#include "types.h"

struct B {
    u8 pad[0x23];
    u8 a : 1;
    u8 b : 5;
};

extern void func_0801BF68(u8 *, u8);
extern void func_08085BA0(u8 *, u8 *);

void func_080855B4(u8 *a) {
    u8 *q = a + 124;
    func_0801BF68(a + 184, (*(struct B **)(q + 4))->b);
    func_08085BA0(a, q);
}
