#include "types.h"

extern u8 *gUnk_0203916C;

void func_0808D3F0(u8 *a, u16 *out) {
    u8 *p = gUnk_0203916C + 124;
    out[0] = *(u16 *)(a + 36) + *(u16 *)(p + 40) - 48;
    out[1] = *(u16 *)(a + 38) + *(u16 *)(p + 42) - 88;
}
