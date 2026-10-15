#include "types.h"

extern void func_080E8034(void);
extern void func_0807E638(u8 *, u32);

void func_080E8014(u8 *a, s32 *p) {
    if (++p[4] > 59)
        func_0807E638(a, (u32)func_080E8034);
}
