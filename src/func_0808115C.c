#include "types.h"

extern s32 func_080175B8(u32);

u32 func_0808115C(u8 *a, u8 *b) {
    if (b[15] == 0 || func_080175B8(*(u32 *)(a + 12)) != -1)
        return 0;
    return 1;
}
