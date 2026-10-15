#include "types.h"

extern u8 *gUnk_0203916C;

void func_0808D440(u8 *a, u16 *out) {
    u8 *p = gUnk_0203916C;
    p += 0x7C;
    out[0] = *(u16 *)(a + 0x24) + *(u16 *)(p + 0x28);
    out[1] = *(u16 *)(a + 0x26) + *(u16 *)(p + 0x2A);
}
