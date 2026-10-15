#include "types.h"
extern void func_08006ABC(int);
extern void func_0807E98C(int);

void func_08080564(int a, int *b) {
    func_08006ABC(((u32) * (u8 *)(*b + 0x23) << 26) >> 27);
    func_0807E98C(*b);
}
