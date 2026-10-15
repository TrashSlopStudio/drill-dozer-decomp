#include "types.h"

extern int func_08017D74(u8 *p, u32 a, int b);
extern int func_08017DD8(u8 *p);

u32 func_080363EC(u8 *p, u32 a) {
    int r = func_08017D74(p, a, 0);
    if (r == 2)
        return 0;
    else if (r == 3) {
        if (func_08017DD8(p) == 3)
            return 1;
        else
            return 0;
    }
    return 1;
}
