#include "types.h"

extern u8 gUnk_020345C8[];
extern u32 gUnk_020358CC;
extern void func_0802C4D0(void);
extern void func_0802BFBC(u8 *, u32);

void func_0802C59C(void) {
    func_0802C4D0();
    func_0802BFBC(gUnk_020345C8, gUnk_020358CC);
}
