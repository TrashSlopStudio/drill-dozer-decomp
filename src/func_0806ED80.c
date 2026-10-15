#include "types.h"

extern u32 (*gUnk_083411FC[])(u32, u8 *);

u32 func_0806ED80(u32 a, u8 *b) { return gUnk_083411FC[*b](a, b); }
