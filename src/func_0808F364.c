#include "types.h"

extern u32 *gUnk_083C0DD4[];
extern u32 func_080F8FBC(u32, u32, u32);

u32 func_0808F364(u32 a, u32 b) {
    u32 *t = gUnk_083C0DD4[*(u8 *)(a + 0x74)];
    return func_080F8FBC(a, b, t[*(u8 *)(a + 0x76)]);
}
