#include "types.h"

extern int func_0800089C(void *, void *, int);
extern void func_0807BAD4(void);
extern u32 *gUnk_0203610C;

void func_0807B078(void) {
    if (gUnk_0203610C != 0) {
        *gUnk_0203610C = 0;
        func_0800089C(func_0807BAD4, 0, 50);
    }
}
