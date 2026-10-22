#include "types.h"
extern u32 *func_0803EC74(void);
extern s32 func_080F8FB8(u32 *, u32);
extern u32 gUnk_082B9508[];
void func_0803E9F4(void) {
    u32 *p = func_0803EC74();
    while (func_080F8FB8(p, gUnk_082B9508[*p]) == 1) {
    }
}
