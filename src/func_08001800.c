#include "types.h"

extern u32 gUnk_03000940[];
extern void func_08000994(void);

void func_08001800(void) {
    s32 p;
    u32 z;
    s32 q;

    func_08000994();
    p = (s32)gUnk_03000940;
    z = 0;
    q = p + 12;
    do {
        *(u32 *)q = z;
        q -= 4;
    } while (q >= p);
}
