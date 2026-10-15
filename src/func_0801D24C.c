#include "types.h"

extern u32 func_080175A8(void);
extern void func_0801D194(u32 *);
extern u32 gUnk_03001240[];

void func_0801D24C(void) {
    u32 *p;
    s32 i;

    if (func_080175A8() == 2) {
        p = gUnk_03001240;
        i = 23;
        do {
            func_0801D194(p);
            p++;
        } while (--i >= 0);
    }
}
