#include "types.h"

extern s32 func_080ACB8C(void);

s32 func_080AC84C(s32 *p) {
    if (func_080ACB8C() == 1) {
        p[1]++;
        if (p[1] > 59) {
            p[1] = 0;
            p[0] = 15;
        }
    }
    return 0;
}
