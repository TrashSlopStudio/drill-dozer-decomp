#include "types.h"

extern void func_0801ED70(u32 a, u8 *b);
extern void func_0801EA50(u8 *a);

u32 func_0801EA24(u8 *a) {
    u32 r;
    func_0801ED70(*(u16 *)(a + 24), a + 204);
    if (a[207] != 1) {
        r = 0;
    } else {
        func_0801EA50(a);
        r = 1;
    }
    return r;
}
