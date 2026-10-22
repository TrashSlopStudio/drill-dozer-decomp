#include "types.h"

u32 func_0804AB84(u8 *a, u8 *b, u32 n) {
    while (*a == *b) {
        if (*a == 0xFF)
            return 0;
        a++;
        b++;
        n--;
        if (n == 0)
            return 0;
    }
    return *a - *b;
}
