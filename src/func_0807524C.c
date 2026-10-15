#include "types.h"

void func_0807524C(s32 *p, s32 d) {
    if (*p > 0) {
        *p -= d;
        if (*p < 0)
            *p = 0;
    } else if (*p < 0) {
        *p += d;
        if (*p > 0)
            *p = 0;
    }
}
