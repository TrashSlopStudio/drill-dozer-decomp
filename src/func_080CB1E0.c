#include "types.h"

extern void func_080CAED8(u8 *, u8 *);
extern void func_0801BF58(u8 *, u32);
extern void func_0801AEF0(u8 *, u32);

void func_080CB1E0(u8 *a) {
    u8 *q = a + 124;
    func_080CAED8(a, q);
    func_0801BF58(a + 132, *(u32 *)(q + 4));
    func_0801AEF0(a, *(u32 *)(q + 4));
}
