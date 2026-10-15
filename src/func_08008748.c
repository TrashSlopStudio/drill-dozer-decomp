#include "types.h"

extern void func_080F86FC(void *, void *, u32);
extern u8 gUnk_020239D8[];

void func_08008748(u32 a, void *b) { func_080F86FC(b, gUnk_020239D8 + (a << 11), 0x400); }
