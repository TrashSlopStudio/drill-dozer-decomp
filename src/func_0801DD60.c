#include "types.h"

extern u32 func_0801D95C(u32, u32);
extern void func_0801DA84(u8 *, u16);

void func_0801DD60(u8 *p) {
    *(u16 *)(p + 10) = func_0801D95C(*(s16 *)(*(u8 **)(p + 16) + 0xF4), 700);
    func_0801DA84(p, *(u16 *)(p + 10));
}
