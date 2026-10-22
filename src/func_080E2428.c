#include "types.h"

u32 func_080E2428(u8 *a) {
    u8 *p = *(u8 **)(a + 4) + 0x7c;
    switch (a[21]) {
    case 0:
        p[14] = 0;
        a[21]++;
        break;
    case 1:
        return 1;
    }
    return 0;
}
