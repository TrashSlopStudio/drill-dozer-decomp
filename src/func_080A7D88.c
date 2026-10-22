#include "types.h"
extern u8 *func_0807E634(u32 a);
extern void func_080057F0(u32 a, u32 b, u32 c);
void func_080A7D88(u32 a, u32 b) {
    u8 *p = func_0807E634(a);
    *(u32 *)(p + 28) = b;
    func_080057F0(*(u32 *)(p + 44), 0, 0);
    func_080057F0(*(u32 *)(p + 48), 0, 0);
}
