#include "types.h"

extern u32 *func_08001728();
extern void func_0800089C();

void func_0808CFFC(u8 *a) {
    u32 *p = func_08001728(16);
    func_0800089C(0x0808D025, p, 0x1801);
    *p = *(u32 *)(a + 12);
}
