#include "types.h"

typedef void (*Fn)(u32, u8 *);
extern Fn gUnk_084C8FBC[];

void func_080E8C24(u32 a, u8 *b) { gUnk_084C8FBC[b[4]](a, b); }
