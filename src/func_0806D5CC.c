#include "types.h"

extern int func_0806D5B4(u8 *);

int func_0806D5CC(u8 *p) {
    if (func_0806D5B4(p) == 1) {
        *(int *)(p + 0x374) = 0;
        *(int *)(p + 0x37C) = 0;
        return 1;
    }
    return 0;
}
