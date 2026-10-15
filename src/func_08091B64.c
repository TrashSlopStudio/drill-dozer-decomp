#include "types.h"
extern void func_08006ABC(int);
extern void func_0801B064(int);
extern void func_08092044(int);
void func_08091B64(int *p) {
    func_08006ABC(((u32) * (u8 *)(p[31] + 0x23) << 26) >> 27);
    func_0801B064(p[31]);
    func_08092044(p[4]);
}
