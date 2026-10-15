#include "types.h"

extern void func_080DA160(u32);

u32 func_080DA7D0(u8 *p) {
    if (p[0x74] == 2) {
        func_080DA160(*(u32 *)(p + 12));
        return 1;
    }
    return 0;
}
