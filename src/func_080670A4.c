#include "types.h"
extern u32 func_080627D4(void);
u32 func_080670A4(u32 *p) {
    if (p[1] != 0)
        return 1;
    if (func_080627D4() != 0)
        p[1]++;
    return 0;
}
