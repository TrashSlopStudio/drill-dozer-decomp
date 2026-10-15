#include "types.h"

struct S {
    u8 pad[0x84];
    u32 arr[1];
};

extern struct S *func_080B27D8(void);

u32 func_080B2B94(u32 a) { return func_080B27D8()->arr[a]; }
