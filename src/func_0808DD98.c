#include "types.h"

extern void func_080057F0(u32, u32, u32);

void func_0808DD98(u32 *p, u32 v) {
    p[1] = p[0];
    p[0] = v;
    func_080057F0(p[2], 0, 0);
}
