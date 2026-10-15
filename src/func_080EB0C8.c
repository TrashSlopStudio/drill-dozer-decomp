#include "types.h"

extern u8 gUnk_084CCBC4[];
extern void func_080EB2E4(u8 *, u8 *);
extern void func_0801AEF0(u8 *, u32);

u32 func_080EB0C8(u8 *a, u8 *b) {
    func_080EB2E4(b, gUnk_084CCBC4);
    func_0801AEF0(a, *(u32 *)(b + 16));
    return 0;
}
