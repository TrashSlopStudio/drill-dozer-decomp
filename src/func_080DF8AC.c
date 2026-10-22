#include "types.h"
extern void func_0801CECC(u8 *);
extern void func_080E0EEC(u8 *, u8 *, u32);
u32 func_080DF8AC(u8 *a, u8 *b) {
    u32 r;
    if (a[0x74] != 0) {
        r = 13;
    } else {
        b[9] = 0;
        func_0801CECC(a);
        func_080E0EEC(a, b, 10);
        r = 2;
    }
    return r;
}
