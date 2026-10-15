#include "types.h"

extern void func_0801BF48(u32 a, u32 b);
extern void func_0801B064(u32);

void func_080D63E8(u8 *p) {
    func_0801BF48((u32)(p + 128), *(u32 *)(p + 124));
    func_0801B064(*(u32 *)(p + 124));
}
