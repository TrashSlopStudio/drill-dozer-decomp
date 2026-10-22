#include "types.h"

extern s32 func_0806B864(void);
extern void func_080DC2B4(u32);

s32 func_080DC1E0(u32 *p) {
    if (func_0806B864() == 1) {
        return 0;
    }
    func_080DC2B4(p[7]);
    p[5] = 0;
    p[0] = 11;
    return 1;
}
