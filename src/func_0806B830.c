#include "types.h"

extern void func_0806B3BC(u32, u8, u32);
extern u8 *func_0806B884(void);

void func_0806B830(u32 a, u32 b, u8 c) {
    func_0806B3BC(a, c, 2);
    *(u32 *)(func_0806B884() + 0x14) = b + c * 16;
}
