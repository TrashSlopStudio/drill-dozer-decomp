#include "types.h"

extern u32 func_08075224(void);
extern u32 func_080D7C04(u32, u32);

u32 func_080D9E34(u32 a, u32 *b) {
    u32 v = func_08075224();
    if (v == 1)
        v = b[1];
    else
        v = b[0];
    return func_080D7C04(a, v);
}
