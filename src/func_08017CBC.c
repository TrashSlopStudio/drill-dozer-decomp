#include "types.h"

extern s32 func_080177BC(void);

s32 func_08017CBC(void) {
    switch (func_080177BC()) {
    case 0:
        return 3;
    case 1:
        return 2;
    case 2:
        return 1;
    default:
        return 0;
    }
}
