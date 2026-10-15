#include "types.h"

extern int func_08049680(void *a, int b, int c);
extern u8 gUnk_0844C030[];
extern u16 *gUnk_020391C0;

void func_080C2534(void) { *gUnk_020391C0 = func_08049680(gUnk_0844C030, 0x300, 0x300); }
