#include "types.h"

extern void func_0802666C(u8 *, u8 *);
extern void func_080264F0(u32, u16);
extern void func_0801B064(u32);

void func_08026C54(u8 *p) {
    u8 *q = p + 0x7C;
    func_0802666C(p, q);
    func_080264F0(*(u32 *)(q + 20), *(u16 *)(q + 8));
    func_0801B064(*(u32 *)(p + 0x7C));
}
