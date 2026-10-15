#include "types.h"

void *memset(void *, int, u32);

void func_080B3A38(u8 *p) { memset(p + 0x3C0, 0, 24); }
