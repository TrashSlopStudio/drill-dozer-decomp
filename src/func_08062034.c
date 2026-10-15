#include "types.h"

extern u32 func_0806205C(u8 *p);
extern void func_0801BF58(u8 *p, u32 a);
extern void func_08005B18(u32 a, u32 b);
extern u8 gUnk_08327748[];

void func_08062034(u8 *p) {
    u32 r = func_0806205C(p);
    *(u32 *)(p + 0x7c) = r;
    func_0801BF58(p + 0x80, r);
    func_08005B18(*(u32 *)(p + 0x7c), (u32)gUnk_08327748);
}
