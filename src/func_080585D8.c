#include "types.h"
extern void func_0801B064(u32 a);
void func_080585D8(u32 a) {
    u32 *p = (u32 *)(a + 0x7c);
    u32 v0 = p[6];
    u32 v1 = p[7];
    u32 v3 = p[9];
    u32 v2 = p[8];
    func_0801B064(v0);
    func_0801B064(v1);
    func_0801B064(v3);
    func_0801B064(v2);
}
