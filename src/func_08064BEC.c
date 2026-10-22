#include "types.h"

extern u8 func_080118A8(void *a);
extern u32 func_080175A8(void *a);

u32 func_08064BEC(void *a) {
    s32 v = func_080118A8(a);
    if (v <= 1 && func_080175A8(a) == 2) {
        return 1;
    }
    return 0;
}
