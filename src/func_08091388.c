#include "types.h"
extern void func_080911C8(u32 a, u32 b);
extern void func_0801BF58(u32 a, u32 b);
extern void func_080911F0(u32 a, u32 b);
extern void func_080912A0(u32 a, u32 b);
void func_08091388(u32 a) {
    u32 b = a + 0x7c;
    func_080911C8(a, b);
    func_0801BF58(a + 0x8c, *(u32 *)(b + 12));
    func_080911F0(a, b);
    func_080912A0(a, b);
}
