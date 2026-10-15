#include "types.h"

typedef void (*Fn)(u8 *);
extern Fn gUnk_083AD9C8[];

void func_08088574(u8 *p) { gUnk_083AD9C8[p[0xCA]](p); }
