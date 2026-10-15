#include "types.h"

extern void func_08091EB0(u8 *, u32, u32);
extern void func_08029E54(u32);

u32 func_080919AC(u8 *p) {
    p[0x73] = 30;
    p[0x76] = 4;
    func_08091EB0(p, *(u32 *)(p + 0x7C), 3);
    func_08029E54(88);
    return 1;
}
