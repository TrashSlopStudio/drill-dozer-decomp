#include "types.h"

extern void func_0801BF48(u32 a, u32 b);
extern void func_080926B4(u8 *);

void func_080926C0(u8 *p) {
    func_0801BF48((u32)(p + 140), *(u32 *)(p + 124));
    func_080926B4(p);
}
