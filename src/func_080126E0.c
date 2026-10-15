#include "types.h"

extern u16 func_080126FC(u16, u8);
extern u8 func_080126B4(u16);

u8 func_080126E0(u8 *p, u8 b) { return func_080126B4(func_080126FC(p[18], b)); }
