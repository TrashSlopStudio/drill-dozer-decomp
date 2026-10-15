#include "types.h"

extern u16 gUnk_03000A1A;
extern u16 gUnk_03000A1C;
extern u16 gUnk_03000A1E;

void func_08004534(u8 *a, u8 *b, u8 *c) {
    *b = gUnk_03000A1A;
    *a = gUnk_03000A1C;
    *c = gUnk_03000A1E;
}
