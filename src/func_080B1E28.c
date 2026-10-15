#include "types.h"

extern void func_0807E98C(u32);

void func_080B1E28(u32 a, u8 *b) {
    if (*(u32 *)(b + 8) != 0) {
        func_0807E98C(*(u32 *)(b + 8));
        *(u32 *)(b + 8) = 0;
    }
}
