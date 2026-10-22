#include "types.h"
extern u32 *func_0801AF20(u32 a, u32 b);
extern u32 gUnk_084824D4;
extern u32 gUnk_0848250C;
void func_080D6680(u32 a, u32 **out) {
    out[0] = func_0801AF20(a, 2);
    out[0][10] = (u32)&gUnk_084824D4;
    out[1] = func_0801AF20(a, 10);
    out[1][10] = (u32)&gUnk_0848250C;
}
