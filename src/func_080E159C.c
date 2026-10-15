#include "types.h"

extern void func_08006C48(u32);
extern void func_0801B064(u32);

void func_080E159C(u32 a, u32 *b) {
    func_08006C48((u32)(*(u8 *)(*b + 0x23) << 26) >> 27);
    func_0801B064(*b);
}
