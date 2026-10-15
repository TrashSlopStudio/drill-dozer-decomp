#include "types.h"
extern u32 func_08012D78(u8 *);
u32 func_0808FEF0(u8 *p) {
    if (func_08012D78(p + 0x2C) == 1) {
        p[0x71] = 0;
        return 1;
    }
    return 0;
}
