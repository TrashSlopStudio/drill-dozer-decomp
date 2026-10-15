#include "types.h"
extern void func_0801BF48(u8 *, u32);
extern void func_080D0750(u8 *, u8 *);
void func_080CFF10(u8 *a) {
    u8 *b = a + 124;
    func_0801BF48(a + 160, *(u32 *)(b + 4));
    func_0801BF48(a + 168, *(u32 *)(b + 8));
    func_080D0750(a, b);
}
