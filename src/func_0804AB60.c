#include "types.h"

s32 func_0804AB60(u8 *a, u8 *b) {
    while (*a == *b) {
        if (*a == 0xFF)
            return 0;
        a++;
        b++;
    }
    return *a - *b;
}
