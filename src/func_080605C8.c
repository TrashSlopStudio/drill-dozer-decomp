#include "types.h"

extern void func_0804CEDC(u32, u32, u32, u32);
extern void func_08029E54(u32);

u32 func_080605C8(u8 *a, u8 *b) {
    b[6] |= 1;
    func_0804CEDC(*(u32 *)(a + 12), (u32)(a + 36), 0, 0);
    func_08029E54(70);
    return 4;
}
