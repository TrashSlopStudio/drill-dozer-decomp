#include "types.h"

extern void func_080066B8(u32, u32);

void func_0808DB7C(u32 a, u8 *b) {
    u16 *p = *(u16 **)(b + 0x54);
    func_080066B8(p[3], 64);
    func_080066B8(p[4], 96);
    func_080066B8(p[9], 48);
}
