#include "types.h"

extern void func_08006ABC(u32);
extern void func_0807E98C(u8 *);

void func_080AF478(void *a, u8 *b) {
    u8 *p = *(u8 **)(b + 8);

    if (p != 0) {
        func_08006ABC((u32)(p[0x23] << 26) >> 27);
        func_0807E98C(p);
    }
}
