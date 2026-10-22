#include "types.h"

extern void func_08006C48(u32 a);
extern void func_0801B064(u32 a);

void func_080E0920(u32 a, u32 *b) {
    s32 i;
    u32 *p;
    func_08006C48((u32)(*(u8 *)(b[0] + 0x23) << 26) >> 27);
    p = b;
    for (i = 1; i >= 0; i--) {
        func_0801B064(*p++);
    }
}
