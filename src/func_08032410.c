#include "types.h"

extern u32 func_08011B74(u8 *);
extern void func_08011B28(void);

void func_08032410(u8 *a) {
    s32 *p;
    if (func_08011B74(a) != 1) {
        p = (s32 *)(a + 0xF4);
        if (*p == 0) {
            func_08011B28();
        }
        *p = *p + 1;
        if (*p > 9) {
            *p = 0;
        }
    }
}
