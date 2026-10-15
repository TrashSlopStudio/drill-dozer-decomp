#include "types.h"

extern void func_0808701C(u32, u32);

u32 func_08086A04(u8 *p) {
    if (p[5] == 0) {
        func_0808701C(*(u32 *)p, 0);
        return 1;
    }
    return 0;
}
