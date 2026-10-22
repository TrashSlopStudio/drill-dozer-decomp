#include "types.h"

u32 func_0804BE98(u8 *p) {
    u8 *q = p + 0x7c;
    u8 v = *(q + 19) & 4;
    if (v == 0) {
        *(p + 0x74) = v;
        *(p + 0x75) = v;
        *(p + 0x76) = 3;
    }
    return 0;
}
