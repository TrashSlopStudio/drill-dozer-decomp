#include "types.h"

extern void func_0801BF48(u8 *, u32);
extern void func_080448D8(u8 *);

void func_08044838(u8 *p) {
    u32 v = *(u32 *)(p + 0x7C);
    if (v != 0)
        func_0801BF48(p + 0x88, v);
    func_080448D8(p);
}
