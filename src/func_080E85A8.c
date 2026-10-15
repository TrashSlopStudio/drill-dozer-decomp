#include "types.h"

extern void func_0801B1C4(u8 *);

void func_080E85A8(u8 *a) {
    if (++a[0x73] > 8)
        func_0801B1C4(a);
}
