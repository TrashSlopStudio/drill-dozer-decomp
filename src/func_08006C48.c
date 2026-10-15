#include "types.h"

extern void func_08006C94(u32, u32, u32, u32);
extern void func_08006ABC(u32);

void func_08006C48(u32 a) {
    func_08006C94(a, 256, 256, 0);
    func_08006ABC((u8)a);
}
