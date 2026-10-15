#include "types.h"
void func_0801BF48(void *, u32);
void func_0801BF68(void *, u8);
void func_080AEDDC(void *);
void func_080AEE04(u8 *p) {
    if (*(u32 *)(p + 16) != 0) {
        func_0801BF48(p + 24, *(u32 *)(p + 16));
        func_0801BF68(p + 32, p[9]);
        func_080AEDDC(p);
    }
}
