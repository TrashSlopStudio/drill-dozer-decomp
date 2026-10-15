#include "types.h"

extern void func_0801BF48(u8 *a, u32 b);
extern void func_080735C0(u32 a);

void func_0807378C(u8 *p) {
    func_0801BF48(p + 0x80, *(u32 *)(p + 0x7C));
    func_080735C0(*(u32 *)(p + 0x7C));
}
