#include "types.h"
extern void func_08085B30(u8 *a, u8 *b);
extern void func_08085BE8(u8 *a, u8 *b, int c);
extern void func_08085E20(u8 *a, u8 *b);
void func_08085508(u8 *a) {
    u8 *b = a + 0x7c;
    *(u32 *)(b + 0x18) = 0x100;
    func_08085B30(a, b);
    func_08085BE8(a, b, 0);
    func_08085E20(a, b);
}
