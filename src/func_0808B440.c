#include "types.h"

extern void func_0808B3FC(u8 *);

void func_0808B440(u8 *p) {
    if (*(u32 *)(p + 0x7C) != 0)
        p[0xC3] = 1;
    func_0808B3FC(p);
}
