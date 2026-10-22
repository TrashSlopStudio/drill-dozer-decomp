#include "types.h"
extern void func_0801BF48(u8 *, u32);
extern void func_080504E4(u8 *, u32 *);
void func_0805041C(u8 *a) {
    u32 *p = (u32 *)(a + 0x7c);
    func_0801BF48(a + 0x88, p[0]);
    func_0801BF48(a + 0x90, p[1]);
    func_080504E4(a, p);
}
