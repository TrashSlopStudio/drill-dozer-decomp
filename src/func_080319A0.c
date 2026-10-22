#include "types.h"

extern void func_0803197C(u8 *);
extern s32 func_080F8FF0(s32, s32);

s32 func_080319A0(u8 *p) {
    func_0803197C(p);
    *(s32 *)(p + 0xFC) = func_080F8FF0(-*(s32 *)(p + 0x164), 0x18000);
    *(s32 *)(p + 0x164) = 0;
    return 1;
}
