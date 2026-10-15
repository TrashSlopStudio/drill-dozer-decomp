#include "types.h"
extern u8 *gUnk_0203916C;
void func_0808D418(u8 *a, s16 *x, s16 *y) {
    u8 *p = gUnk_0203916C + 0x7c;
    *x = *(u16 *)(a + 0x24) + *(u16 *)(p + 0x28) - 40;
    *y = *(u16 *)(a + 0x26) + *(u16 *)(p + 0x2a) + 24;
}
