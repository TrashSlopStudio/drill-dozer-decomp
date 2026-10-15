#include "types.h"

extern u16 func_080126FC(u16, u8);
extern s16 func_08012688(u16);

s16 func_080125DC(u16 a, u8 b) { return func_08012688(func_080126FC(a, b)); }
