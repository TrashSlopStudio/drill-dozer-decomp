#include "types.h"
extern void func_08005560(u32);
extern void func_0800090C(u32);
extern void func_08001768(u32);
extern u32 *gUnk_0203607C;
void func_0806F6AC(void) {
    u32 *p = gUnk_0203607C;
    if (p != 0) {
        func_08005560(p[0]);
        func_0800090C(p[2]);
        func_08001768((u32)gUnk_0203607C);
        gUnk_0203607C = 0;
    }
}
