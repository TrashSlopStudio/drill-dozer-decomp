#include "types.h"
extern u32 func_080AE668(u32, u32);
extern u32 func_08056294(u32, u32);
u32 func_080AE714(u32 a, u32 *b) {
    if (func_080AE668(a, (*b << 4) >> 28) == 0) {
        if (func_08056294(a, a + 0x3c) != 0) {
            return 1;
        }
    }
    return 0;
}
