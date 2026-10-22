#include "types.h"

extern void func_08080EAC(u32 a, u32 b);
extern void func_08080DE4(u32 a, u32 b);
extern u8 func_08080F7C(u32 a, u32 b, u32 c);

u32 func_08081180(u32 a, u32 b) {
    func_08080EAC(a, b);
    func_08080DE4(a, b);
    *(u8 *)(a + 0x76) = func_08080F7C(a, b, 1);
    return 1;
}
