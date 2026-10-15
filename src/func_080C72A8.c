#include "types.h"

extern void func_0801BF48(u8 *, u32);
extern void func_080C7288(u8 *);
extern void func_0802A0B0(u32);

void func_080C72A8(u8 *p) {
    func_0801BF48(p + 0x80, *(u32 *)(p + 0x7C));
    func_080C7288(p);
    func_0802A0B0(13);
}
