#include "types.h"

extern void func_08005560(u32);

void func_0808C82C(u8 *p) {
    u32 *q = (u32 *)(p + 0x7C);
    func_08005560(*(u32 *)(p + 0x7C));
    func_08005560(q[1]);
    func_08005560(q[2]);
}
