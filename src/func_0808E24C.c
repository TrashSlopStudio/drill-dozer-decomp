#include "types.h"

void func_0808E24C(u8 *p, u32 a) {
    p += 0x7C;
    p[22] = 8;
    if (a == 2)
        p[24] = 255;
    else
        p[24] = 1;
}
