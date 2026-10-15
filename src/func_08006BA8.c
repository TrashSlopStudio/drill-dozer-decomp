#include "types.h"

extern void func_08005BBC(u8 *, u32, u8);
extern void func_0800602C(u8 *, u32, u8);

void func_08006BA8(u8 *p, u32 b, u8 c) {
    func_08005BBC(p, b, c);
    if (p[14] != 3)
        func_0800602C(p, b, c);
}
