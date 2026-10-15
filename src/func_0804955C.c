#include "types.h"

extern void func_080F86FC(void *, void *, u32);
extern u8 gUnk_02035A8C[];

void func_0804955C(void) {
    u32 z = 0;
    func_080F86FC(&z, gUnk_02035A8C, 0x05000010);
}
