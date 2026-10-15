#include "types.h"

extern void func_080561A4(u8 *);
extern void func_0801B064(u32);

void func_080B2384(u8 *p) {
    if (*(u32 *)(p + 0x7C) != 0) {
        func_080561A4(p);
        func_0801B064(*(u32 *)(p + 0x7C));
    }
}
