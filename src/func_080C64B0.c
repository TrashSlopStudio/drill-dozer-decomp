#include "types.h"

extern void func_0801BF48(u8 *, u32);
extern void func_080C6490(u8 *);

void func_080C64B0(u8 *p) {
    func_0801BF48(p + 0x80, *(u32 *)(p + 0x7C));
    func_080C6490(p);
}
