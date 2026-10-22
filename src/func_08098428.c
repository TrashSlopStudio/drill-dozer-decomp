#include "types.h"

extern void func_0801B09C(u32, u32);
extern void func_08097CE8(u32);

void func_08098428(u32 a) {
    if (*(u8 *)(a + 0xA8) == 5)
        func_0801B09C(*(u32 *)(a + 0x7C), 1);
    func_08097CE8(a);
}
