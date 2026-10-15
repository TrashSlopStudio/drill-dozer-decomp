#include "types.h"

extern void func_0801BF48(void *, u32);
extern void func_080C69D8(void *);

void func_080C69F8(u8 *p) {
    func_0801BF48(p + 0x80, *(u32 *)(p + 0x7C));
    func_080C69D8(p);
}
