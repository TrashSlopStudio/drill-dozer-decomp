#include "types.h"

extern void *gUnk_084C7B7C[];
extern void func_080F8FBC(u32, u8 *, void *);

void func_080E8918(u32 a, u8 *b) { func_080F8FBC(a, b, gUnk_084C7B7C[b[4]]); }
