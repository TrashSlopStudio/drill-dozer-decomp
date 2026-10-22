#include "types.h"

extern void func_0801BE28(u8 *);
extern void func_0801B1C4(u8 *);

u32 func_08027FB4(u8 *p) {
    u8 *q = p + 0x73;
    if (--*q == 0) {
        func_0801BE28(p);
        func_0801B1C4(p);
        return 0;
    }
    return 1;
}
