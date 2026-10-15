#include "types.h"

extern void func_08055370(u8 *, u32);
extern void func_08055478(u8 *, u32);
extern void func_0801AEF0(u8 *, u32);

void func_08055350(u8 *a) {
    func_08055370(a, 1);
    func_08055478(a, 1);
    func_0801AEF0(a, *(u32 *)(a + 124));
}
