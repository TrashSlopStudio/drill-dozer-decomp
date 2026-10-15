#include "types.h"

extern u16 *gUnk_020391C0;
extern void func_080066B8(u16, u32);
extern void func_08001768(u16 *);

u32 func_080C2500(void) {
    if (gUnk_020391C0 != 0) {
        func_080066B8(*gUnk_020391C0, 24);
        func_08001768(gUnk_020391C0);
        gUnk_020391C0 = 0;
    }
    return 1;
}
