#include "types.h"

struct S {
    u32 a[12];
};

extern void func_08021798(void *);

void func_080217B4(u8 *p) {
    *(struct S *)(p + 0x2e8) = **(struct S **)(p + 0x2b0);
    func_08021798(p);
}
