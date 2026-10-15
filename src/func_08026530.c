#include "types.h"

extern u16 func_08012588(u8);

u8 func_08026530(u8 *p, u8 b) {
    if (func_08012588(b) == 0)
        return 0;
    return p[4];
}
