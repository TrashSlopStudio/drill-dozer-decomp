#include "types.h"

extern u8 *func_08001728(u32);
extern void func_0800089C(u32, u8 *, u32);

void func_08092F38(u32 a) {
    u8 *p = func_08001728(20);
    *(u32 *)p = a;
    *(u32 *)(p + 8) = 1;
    *(u16 *)(p + 14) = 0;
    *(u16 *)(p + 16) = 0;
    func_0800089C(0x08092F65, p, 50);
}
