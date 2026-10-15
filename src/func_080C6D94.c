#include "types.h"

extern void func_0801BF48(u32 a, u32 b);
extern void func_080C6D88(u8 *);

void func_080C6D94(u8 *p) {
    func_0801BF48((u32)(p + 0x84), *(u32 *)(p + 0x7C));
    func_080C6D88(p);
}
