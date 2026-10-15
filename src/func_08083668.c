#include "types.h"

extern u32 gUnk_030056FC;
extern u32 gUnk_083925FC[];

void func_08083668(u8 *p, s32 i) {
    gUnk_030056FC = gUnk_083925FC[i];
    *(u32 *)(p + 0x164) += gUnk_030056FC;
}
