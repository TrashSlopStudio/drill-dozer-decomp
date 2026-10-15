#include "types.h"
extern void func_0801BF48(u8 *, u8 *);
extern void func_0801B064(u8 *);
void func_080A6A58(u8 *a) {
    u8 **s;
    if (a[0x76] != 3) {
        s = (u8 **)(a + 0x7c);
        ((u8 *)s)[0x1c] = (*s)[3];
        func_0801BF48(a + 0x80, *(u8 **)(a + 0x7c));
        func_0801B064(*(u8 **)(a + 0x7c));
    }
}
