#include "types.h"

extern void func_0801BE28(u8 *);
extern void func_0801B1C4(u8 *);

u32 func_08029A38(u8 *p) {
    if (--p[0x73] == 0) {
        func_0801BE28(p);
        func_0801B1C4(p);
    }
    return 1;
}
