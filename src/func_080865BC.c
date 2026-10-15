#include "types.h"

extern u32 func_0808659C(u32);

u32 func_080865BC(u8 *p) {
    if (func_0808659C((u32)p) == 0 || p[0x9A] == 1)
        return 1;
    return 0;
}
