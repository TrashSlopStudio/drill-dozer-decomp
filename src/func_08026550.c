#include "types.h"

extern u16 func_08012588(u8);

u16 func_08026550(u8 *p, u8 b) {
    if (func_08012588(b) == 0) {
        return 0;
    }
    return *(u16 *)(p + 6) / 6;
}
