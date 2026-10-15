#include "types.h"

extern u8 func_0800F908(u8 *, s16, s16);

u32 func_08095D5C(u8 *p, s16 x, s16 y) {
    switch (func_0800F908(p, x, y)) {
    case 147:
    case 148:
    case 149:
    case 150:
        return 1;
    }
    return 0;
}
