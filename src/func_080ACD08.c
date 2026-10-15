#include "types.h"

extern void func_0806B810(s32, s32);

s32 func_080ACD08(s32 *p) {
    if (++p[1] > 29) {
        func_0806B810(p[4], 3);
        p[1] = 0;
        p[0]++;
    }
    return 0;
}
