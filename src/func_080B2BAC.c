#include "types.h"

struct S {
    u8 pad[0x84];
    u8 *arr[1];
};

extern struct S *func_080B27D8(void);

u8 *func_080B2BAC(u32 i) { return func_080B27D8()->arr[i] + 0x20; }
