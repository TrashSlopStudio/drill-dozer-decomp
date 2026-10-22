#include "types.h"

extern void func_0809A330(u8 *, u8 *);
extern void func_0809A37C(u8 *, u8 *);

void func_0809A224(u8 *a) {
    u8 *b = a + 0x7C;
    if (*(u32 *)b != 0) {
        func_0809A330(a, b);
        func_0809A37C(a, b);
    }
}
