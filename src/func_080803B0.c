#include "types.h"
struct S {
    u8 pad[0x23];
    u8 a : 1;
    u8 b : 5;
};
extern void func_08006ABC(u32);
extern void func_0807E98C(struct S *);

void func_080803B0(u32 x, u8 *p) {
    func_08006ABC((*(struct S **)(p + 8))->b);
    func_0807E98C(*(struct S **)(p + 8));
}
